#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

static char *whom = "world";
static int howmany = 1;
module_param(howmany, int, S_IRUGO);
module_param(whom, charp, S_IRUGO);


static int hello_init(void){
    printk(KERN_ALERT "Hello, world");
    return 0;
}

static void hello_exit(void){
    printk(KERN_ALERT "Goodbye, cruel world");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Scott Lee");
MODULE_DESCRIPTION("It says hello goodbye");
MODULE_VERSION("0.0");
MODULE_ALIAS("");
//MODULE_DEVICE_TABLE();
