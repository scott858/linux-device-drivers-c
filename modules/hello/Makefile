ifneq ($(KERNELRELEASE),)
	obj-m := hello.o
else
#	KERNELDIR ?= /home/slee/repos/linux
	KERNELDIR ?= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif
