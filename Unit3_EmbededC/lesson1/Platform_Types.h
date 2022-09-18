// Platform types for ST Microelectronics ST10

#define CPU_TYPE CPU_TYPE_16
#define CPU_BIT_ORDER LSB_FIRST
#define CPU_BYTE_ORDER LOW_BYTE_FIRST

typedef unsigned char         boolean;

typedef signed char           sint8;
typedef unsigned char         uint8;
typedef signed short          sint16;
typedef unsigned short        uint16;
typedef signed long           sint32;
typedef unsigned long         uint32;
typedef signed long long      sint64;
typedef unsigned long long    uint64;

typedef unsigned short        uint8_least;
typedef unsigned short        uint16_least;
typedef unsigned long         uint32_least;
typedef signed short          sint8_least;
typedef signed short          sint16_least;
typedef signed long           sint32_least;

typedef float                 float32;
typedef double                float64;
