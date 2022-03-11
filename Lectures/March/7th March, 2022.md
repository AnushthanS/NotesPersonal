#Monday 
### 10 AM - #OCW 
- Microprocessors
- Focus on 8086 microprocessor
- 8086 operates in 2 modes: maximum and minimum
- 8086 has a 20 line address bus == 2^20 bytes of memory == 1 MB
- Microprocessor memory is divided into segment of different sizes, generally 4 types of registers of 16 bits each:
	- CS - code segment
	- DS - data segment
	- SS - stack segment
	- ES - extra segment
- These are also called segment registers
- 8086 is a 40 pin IC(microprocessor)
- Primary pins AD0 - AD15 represent multiplexed address data bus
- MN/MX pin is an input pin: If MN/MX is high, processor is in minimum mode(and MN/MX low for maximum)
- Minimum mode: CPU issues controls :: Maximum mode: CPU is issued controls
- AD16 - AD19 (or S3-S6) are 4 address lines interchangable with status lines
- Status signals: types of operations to carry out; mainly decided by S3 and S4
- S5 and S6 are enable and disable pins

| S3  | S4  | functions |
| --- | --- | --------- |
| 0   | 0   | ES        |
| 0   | 1   | SS        |
| 1   | 0   | CS        |
| 1   | 1   | DS        |

- Bi-directional pins indicate data flow in either direction
- Ready pin(input): high indicates readiness to transfer data using address lines
- Reset pin: resets the registers; CS registers to max value of hexa, rest of the registers to 0

### 11 AM - #CP 
- Using fprintf(file pointer, string values with place holders) to write to a file
- fprintf(), fputc(), fputs() for write
- fscanf(), fgetc(), fgets() for read
- fputs(String, file pointer)
- loop until EOF to read using fgetc(pointer)
