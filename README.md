# Pico2W Template 

## Initialization

Make sure to run the following before writing any code. 

When the build directory is created, a `compile_commands.json` will be generated. 

If this file does not exist, `clangd` will throw bunch of errors because it will not be able to locate the include files (such as `pico/stdlib.h`).

```console
$ cmake -S . -B build
```

## Building

```console
$ cmake --build build --target $TARGET
```
## Flashing

```console
$ sudo mount $PICO_DEVPATH /mnt && sudo cp build/*.uf2 /mnt && sudo umount /mnt
```
