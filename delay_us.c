/*

	By Myrfy.
	Contact me with the following e-mail address(you should reverse it manually) 
	
	moc.361@bew_hmm
	
*/


#include <delay_us.h>


/*
	This function ignore the time cost on the function calling, eg push reg into stack and pop them.
	So, this function works well when cycle_count is big enough,eg cycle_count > 200. In this case 
	the time cost on the function calling can be ignored.
*/
__asm void delay_clock_cycle(int32_t cycle_count)
{
	
LABEL1
	SUB R0,#4;
	CMP R0,#0x00;
	BGT LABEL1;
	BX LR;
}	
