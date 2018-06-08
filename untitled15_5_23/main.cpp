//#include <iostream>
//
//class Rectangle{
//
//};
//
////이항연산자가 있고
////단항연산자가 있다.
//k=-i; //내가 정의해줘야한다.
////함수연산자
////배열연산자
//
////배열연산자와 함수연산자는 조심해야할게 l-value operator와 r-value operator 가 있다.
//
//float f=i(0); read //const겠지 일반적으로 내용이 안바뀌니까. 레퍼런스를 리턴해야지
//
//i(0)=5; l-value 써야돼 write //const 붙이면 안돼 복사만하면 돼
//
//
//
#include "ee.h"
#include "Arduino.h"
#include "can.h"

short CC_trigger;
short LKAS_trigger;
float current_speed;

float target_speed;
float accel;
float brake ;

float road_direction;
float yaw;

float toLeft;
float toRight;

float toMiddle;
float width;

float angle;
float lookahead;

float speed_error;
float lateral_error;

float left_steer ;
float right_steer ;
float steer_value;
float steer_lock = 0.366519; // Do not Edit.


ISR (isr){
        static int count = 1;
        if (count == 4){
            IncrementCounter(SysTimerCnt);
            count = 0;
        }
        count++;
}

TASK(RCV){

        unsigned char buf[8]={0};
        unsigned long id;
        unsigned char len;

        while(1)
        {
            CAN_read(&id, &len, buf);
            if(len != 0){
                switch(id)
                {
                    case 0x0A0:
                        memcpy(&CC_trigger, buf, sizeof(short));
                        memcpy(&LKAS_trigger, buf+2, sizeof(short));
                        memcpy(&current_speed, buf+4, sizeof(float));
                        break;

                    case 0x0A1:
                        memcpy(&target_speed, buf, sizeof(float));
                        memcpy(&accel, buf+4, sizeof(float));
                        break;

                    case 0x0B0:
                        memcpy(&road_direction, buf, sizeof(float));
                        memcpy(&yaw, buf+4, sizeof(float));
                        break;

                    case 0x0B1:
                        memcpy(&toLeft, buf, sizeof(float));
                        memcpy(&toRight, buf+4, sizeof(float));
                        break;

                    case 0x0B2:
                        memcpy(&toMiddle, buf, sizeof(float));
                        memcpy(&width, buf+4, sizeof(float));
                        break;
                    case 0x0C0:
                        memcpy(&speed_error, buf, sizeof(float));
                        memcpy(&lateral_error, buf+4, sizeof(float));
                        break;
                    default:
                        break;
                }
            }
            else
                break;
        }
        TerminateTask();

};


TASK(CC) {

        unsigned char buf[8];

        if(CC_trigger>0.5)
        {
            if(current_speed <=target_speed+2)
            {
                accel =((target_speed+2)-current_speed)*0.01+0.2;

                brake =0;
            }
            else
            {
                accel = 0;
                brake = (current_speed-(target_speed+2))*0.01+0.2;
            }

        }







        /* Implementation */











        else
        {
            accel = 0;
        }

        memcpy(buf, &accel, sizeof(float));
        memcpy(buf+4, &brake, sizeof(float));

        CAN_write(0x0A5, 8, buf);
        TerminateTask();

};

TASK(LKAS){

        unsigned char buf[8];
        float angle;

        if(LKAS_trigger>0.5)
        {
            float line_value_left = toLeft - toMiddle;
            float line_value_right = toRight - toMiddle;

            if(line_value_left<=line_value_right)
            {
                angle = road_direction -yaw;
                if(-2.5/line_value_left>1.03)
                {
                    brake=0.2;
                    angle -=((1.03-2.5/line_value_left)*0.07);
                }
                else
                {
                    brake=0.2;
                    angle +=((1.03-2.5/line_value_left)*0.07);
                }
            }
            else
            {
                angle = road_direction -yaw +((line_value_right-line_value_left)*0.1);
            }

            Calculate_Steer_Value(angle);
        }

//unsigned char buf[8];
//float angle;

//if(LKAS_trigger>0.5)
//{
//	angle=road_direction -yaw;
//
//	if(toMiddle<0.0)
//	{
//		angle -=(toRight + toMiddle )/80;
//
//	}
//	else
//	{
//		angle -= (toMiddle -toLeft)- 80;
//	}
//
//	Calculate_Steer_Value(angle);
//
//}
//		/* Implementation */
//
//




/* Do NOT Edit This Function */





