#ifndef _UART_H_
#define _UART_H_
#include "common.h"


/**********************************************************************
 * 函数名称： Uart_Init
 * 功能描述： 初始化UART，就是规定传输格式，设置波特率为115200，配置UART占用的GPIO管脚
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
void Uart_Init(void);		

 /**********************************************************************
 * 函数名称： PutChar
 * 功能描述： 从串口输出单个字符到上位机
 * 输入参数：单个字符
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
void PutChar(int c);
 /**********************************************************************
 * 函数名称： GetChar
 * 功能描述： 通过串口，从上位机获取单个字符
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 返回接收到的字符
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
unsigned char GetChar(void);	
  /**********************************************************************
 * 函数名称： PutStr
 * 功能描述： 输出字符串，就是连续发送单个字符
 * 输入参数： 字符串
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/
void PutStr(const char *s);

 #endif
