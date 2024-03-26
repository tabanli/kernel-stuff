# Simple LKM

~ This is my first kernel module in my kernel programming journey; that contains basic concepts such as log levels, init and exit macros.

## Build the module:

- Before loading the module and see results, simply execute make in the module directory to start build process.
```
$ make
```

## Load the module:

- After the build process, use `insmod` command to load this module:

```
$ sudo insmod simple_lkm.ko
```

- Check whether the module has been successfully loaded:

```
$ sudo lsmod | grep simple_lkm
```

- Check the logs:

```
$ sudo dmesg | tail -10
```

*Example logs:*

```
[14447.768469] Hello there, human!
[14447.768473] A warning message.
[14447.768474] An error message.
[14485.809059] Goodbye!
```

## Remove the module:

- Modules can be removed simply with `rmmod` command:

```
$ sudo rmmod simple_lkm
```

Run `sudo dmesg | tail -10` command again, "Goodybe!" message can be seen after module removed.
