#ifndef _US_100_H_
#define _US_100_H_
/*----------------------------------------------------------------------------------------------------------------------/
        *               本程序只供购买者学习使用，版权著作权属于无名科创团队，
        *               无名科创团队将飞控程序源码提供给购买者，
        *               购买者要为无名科创团队提供保护，
        *               未经作者许可，不得将源代码提供给他人
        *               不得将源代码放到网上供他人免费下载，
        *               更不能以此销售牟利，如发现上述行为，
        *               无名科创团队将诉之以法律解决！！！
-----------------------------------------------------------------------------------------------------------------------/
        *               生命不息、奋斗不止；前人栽树，后人乘凉！！！
        *               开源不易，且学且珍惜，祝早日逆袭、进阶成功！！！
-----------------------------------------------------------------------------------------------------------------------/
	*		无名科创开源飞控 V1.1	武汉科技大学  By.YuYi
	*		CSDN博客: http://blog.csdn.net/u011992534
	*               优酷ID：NamelessCotrun无名小哥
	*               无名科创开源飞控QQ群：540707961
        *               https://shop348646912.taobao.com/?spm=2013.1.1000126.2.5ce78a88ht1sO2
        *               百度贴吧:无名科创开源飞控
        *               修改日期:2017/10/30
        *               版本：V1.1
        *               版权所有，盗版必究。
        *               Copyright(C) 武汉科技大学无名科创团队 2017-2019
        *               All rights reserved
----------------------------------------------------------------------------------------------------------------------*/


#define US_100_Distance_CMD    0x55
#define US_100_Temperature_CMD 0x50

float US_100_Distance(uint8 MSB,uint8 LSB);
float US_100_Temperature(uint8 data);
extern float US_Distance;
extern uint16 HC_SR04_RSSI;

#define HC_SR04_OUT_LOW    GPIO_ResetBits(GPIOB,GPIO_Pin_9);
#define HC_SR04_OUT_HIGH   GPIO_SetBits(GPIOB,GPIO_Pin_9);

void HC_SR04_Init(void);
void HC_SR04_Start(void);
extern float HC_SR04_Distance;
extern uint16 Exti_Cnt;
#endif


