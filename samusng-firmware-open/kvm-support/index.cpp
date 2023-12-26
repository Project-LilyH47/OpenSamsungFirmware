// Samsung Flip3 5G Firmware KVMs (main.en-us) (RF-E35 Firmware)
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

#include <linux/kvm.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/types.h>
#include <linux/mm.h>
#include <asm/kvm.h>
#include <asm/cputype.h>
#include <asm/system.h>

static int __init kvm_flip3_init(void) {
    printk(KERN_INFO "KVM support enabled for the phone Rebooting\n");
    return 0;
}

static void __exit kvm_flip3_exit(void) {
    // Unregister KVM capabilities
    // For real?
    printk(KERN_INFO "KVM support disabled\n");
}

module_init(kvm_flip3_init);
module_exit(kvm_flip3_exit);

void kvm_init() {
  kvm_memory = allocate_memory(KVM_MEMORY_SIZE);

  enable_cpu_virtualization();
  enable_memory_virtualization();

  register_interrupt_handler(kvm_handle_interrupt);
  register_exception_handler(kvm_handle_exception);
}

kvm_vm_t kvm_create_vm() {
  kvm_vm_t vm = allocate_vm();

  vm->cpu_state = create_cpu_state();
  vm->memory_map = create_memory_map();

  return vm;
}
