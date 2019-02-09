#include <linux/kernel.h> 

	asmlinkage long sys_gettag(void) 
{
	printk("Keith's Syscall");
	return 0;
}

