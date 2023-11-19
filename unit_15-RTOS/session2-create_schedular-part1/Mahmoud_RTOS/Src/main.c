/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************

 */
#include "string.h"
#include "schedular.h"
Task_ref task1,task2;
void task1_r()
{
	while(1);
}
void task2_r()
{
	while(1);
}
int main(void)
{
	Mahmoud_RTOS_init();
	task1.Stack_size =300;
	strcpy(task1.TaskName,"Task1");
	task1.p_task_entry =task1_r;
	task1.priority=3;
	Mahmoud_RTOS_create_task(&task1);
	//---Task2----//

	task2.Stack_size =300;
	strcpy(task1.TaskName,"Task2");
	task2.p_task_entry =task2_r;
	task2.priority=2;
	Mahmoud_RTOS_create_task(&task2);
	//---------------------------------------------------------//



}