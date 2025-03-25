CC := gcc

football.exe: football.c football_main.c
	$(CC) football.c football_main.c -o football.exe

temperature.exe: temperature.c temperature_main.c
	$(CC) temperature.c temperature_main.c -o temperature.exe
