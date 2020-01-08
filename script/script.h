/*
this file is a set of short script,i use them as the base of long script
*/
#include "base_script.h"
#include "ArrayLish.h"

void command_append()
{

}

void add_task(command * new_task,int run_times)
{
	cur_task.cur_cmd = new_task;
	cur_task.step_num = sizeof(new_task)/sizeof(new_task[0]);
	cur_task.task_over = false;
	cur_task.run_times = run_times;
	cur_task.cur_step = 0;
	cur_task.cur_run_times = 0;

}

void auto_consume_frames()
{
	ArrayList *task = new_array_list(NULL,goto_time_settings,1);
	add_array_list(task,change_day_first_time,1);
	add_array_list(task,change_time,30);
	add_array_list(task,"C123456\0",8);
	add_array_list(task,"D123456\0",8);
}


