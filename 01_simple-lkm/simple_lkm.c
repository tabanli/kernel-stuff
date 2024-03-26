#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("tabanli");
MODULE_DESCRIPTION("Simple LKM");

static int __init my_init(void) {
  
  printk(KERN_ALERT "Hello there, human!\n");
  pr_warn("A warning message."); // KERN_WARNING alias func
  pr_err("An error message."); // KERN_ERR alias func

/** 
 * If you want to see more details for kernel message logging:
 * https://docs.kernel.org/core-api/printk-basics.html
 */

  return 0;
}

static void __exit my_exit(void) {    
  printk(KERN_ALERT "Goodbye!\n");
}

module_init(my_init);
module_exit(my_exit);
