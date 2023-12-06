CC=gcc
CFLAGS=-I.
build_elf: test_mpu_6050.c src/mpu_6050.c
	$(CC) -o build_elf test_mpu_6050.c src/mpu_6050.c $(CFLAGS)

.PHONY: clean

clean:
	rm -f build_elf