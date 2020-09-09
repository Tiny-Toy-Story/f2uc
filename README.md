# f2uc

## Building

```
./make.sh
```
## How do to use f2uc
```
#include <stdio.h>
#include <f2uc.h>

float test[100];

int main()
{
   unsigned char *ptr;
   float *f;
   bool dump;

   for (auto i = 0; i < 100; i++)
   {
      test[i] = i * 0.1 + i;
   }

   float2uc(test, &ptr, sizeof(test), dump = true);
   uc2float(ptr, &f, sizeof(test), dump = true);

   return 0;
}
```
### Result
```
unsigned char weight[] = {
0x00, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x8c, 0x3f, 0xcd, 0xcc, 0x0c, 0x40,
0x33, 0x33, 0x53, 0x40, 0xcd, 0xcc, 0x8c, 0x40, 0x00, 0x00, 0xb0, 0x40,
0x33, 0x33, 0xd3, 0x40, 0x66, 0x66, 0xf6, 0x40, 0xcd, 0xcc, 0x0c, 0x41,
0x66, 0x66, 0x1e, 0x41, 0x00, 0x00, 0x30, 0x41, 0x9a, 0x99, 0x41, 0x41,
0x33, 0x33, 0x53, 0x41, 0xcd, 0xcc, 0x64, 0x41, 0x66, 0x66, 0x76, 0x41,
0x00, 0x00, 0x84, 0x41, 0xcd, 0xcc, 0x8c, 0x41, 0x9a, 0x99, 0x95, 0x41,
0x66, 0x66, 0x9e, 0x41, 0x33, 0x33, 0xa7, 0x41, 0x00, 0x00, 0xb0, 0x41,
0xcd, 0xcc, 0xb8, 0x41, 0x9a, 0x99, 0xc1, 0x41, 0x66, 0x66, 0xca, 0x41,
0x33, 0x33, 0xd3, 0x41, 0x00, 0x00, 0xdc, 0x41, 0xcd, 0xcc, 0xe4, 0x41,
0x9a, 0x99, 0xed, 0x41, 0x66, 0x66, 0xf6, 0x41, 0x33, 0x33, 0xff, 0x41,
0x00, 0x00, 0x04, 0x42, 0x66, 0x66, 0x08, 0x42, 0xcd, 0xcc, 0x0c, 0x42,
0x33, 0x33, 0x11, 0x42, 0x9a, 0x99, 0x15, 0x42, 0x00, 0x00, 0x1a, 0x42,
0x66, 0x66, 0x1e, 0x42, 0xcd, 0xcc, 0x22, 0x42, 0x33, 0x33, 0x27, 0x42,
0x9a, 0x99, 0x2b, 0x42, 0x00, 0x00, 0x30, 0x42, 0x66, 0x66, 0x34, 0x42,
0xcd, 0xcc, 0x38, 0x42, 0x33, 0x33, 0x3d, 0x42, 0x9a, 0x99, 0x41, 0x42,
0x00, 0x00, 0x46, 0x42, 0x66, 0x66, 0x4a, 0x42, 0xcd, 0xcc, 0x4e, 0x42,
0x33, 0x33, 0x53, 0x42, 0x9a, 0x99, 0x57, 0x42, 0x00, 0x00, 0x5c, 0x42,
0x66, 0x66, 0x60, 0x42, 0xcd, 0xcc, 0x64, 0x42, 0x33, 0x33, 0x69, 0x42,
0x9a, 0x99, 0x6d, 0x42, 0x00, 0x00, 0x72, 0x42, 0x66, 0x66, 0x76, 0x42,
0xcd, 0xcc, 0x7a, 0x42, 0x33, 0x33, 0x7f, 0x42, 0xcd, 0xcc, 0x81, 0x42,
0x00, 0x00, 0x84, 0x42, 0x33, 0x33, 0x86, 0x42, 0x66, 0x66, 0x88, 0x42,
0x9a, 0x99, 0x8a, 0x42, 0xcd, 0xcc, 0x8c, 0x42, 0x00, 0x00, 0x8f, 0x42,
0x33, 0x33, 0x91, 0x42, 0x66, 0x66, 0x93, 0x42, 0x9a, 0x99, 0x95, 0x42,
0xcd, 0xcc, 0x97, 0x42, 0x00, 0x00, 0x9a, 0x42, 0x33, 0x33, 0x9c, 0x42,
0x66, 0x66, 0x9e, 0x42, 0x9a, 0x99, 0xa0, 0x42, 0xcd, 0xcc, 0xa2, 0x42,
0x00, 0x00, 0xa5, 0x42, 0x33, 0x33, 0xa7, 0x42, 0x66, 0x66, 0xa9, 0x42,
0x9a, 0x99, 0xab, 0x42, 0xcd, 0xcc, 0xad, 0x42, 0x00, 0x00, 0xb0, 0x42,
0x33, 0x33, 0xb2, 0x42, 0x66, 0x66, 0xb4, 0x42, 0x9a, 0x99, 0xb6, 0x42,
0xcd, 0xcc, 0xb8, 0x42, 0x00, 0x00, 0xbb, 0x42, 0x33, 0x33, 0xbd, 0x42,
0x66, 0x66, 0xbf, 0x42, 0x9a, 0x99, 0xc1, 0x42, 0xcd, 0xcc, 0xc3, 0x42,
0x00, 0x00, 0xc6, 0x42, 0x33, 0x33, 0xc8, 0x42, 0x66, 0x66, 0xca, 0x42,
0x9a, 0x99, 0xcc, 0x42, 0xcd, 0xcc, 0xce, 0x42, 0x00, 0x00, 0xd1, 0x42,
0x33, 0x33, 0xd3, 0x42, 0x66, 0x66, 0xd5, 0x42, 0x9a, 0x99, 0xd7, 0x42,
0xcd, 0xcc, 0xd9, 0x42};
unsigned int weight_size = 400;
float weight[] = {
0.000000, 1.100000, 2.200000, 3.300000, 4.400000, 5.500000, 6.600000, 7.700000, 8.800000, 9.900000, 11.000000, 12.100000,
13.200000, 14.300000, 15.400000, 16.500000, 17.600000, 18.700001, 19.799999, 20.900000, 22.000000, 23.100000, 24.200001, 25.299999,
26.400000, 27.500000, 28.600000, 29.700001, 30.799999, 31.900000, 33.000000, 34.099998, 35.200001, 36.299999, 37.400002, 38.500000,
39.599998, 40.700001, 41.799999, 42.900002, 44.000000, 45.099998, 46.200001, 47.299999, 48.400002, 49.500000, 50.599998, 51.700001,
52.799999, 53.900002, 55.000000, 56.099998, 57.200001, 58.299999, 59.400002, 60.500000, 61.599998, 62.700001, 63.799999, 64.900002,
66.000000, 67.099998, 68.199997, 69.300003, 70.400002, 71.500000, 72.599998, 73.699997, 74.800003, 75.900002, 77.000000, 78.099998,
79.199997, 80.300003, 81.400002, 82.500000, 83.599998, 84.699997, 85.800003, 86.900002, 88.000000, 89.099998, 90.199997, 91.300003,
92.400002, 93.500000, 94.599998, 95.699997, 96.800003, 97.900002, 99.000000, 100.099998, 101.199997, 102.300003, 103.400002, 104.500000,
105.599998, 106.699997, 107.800003, 108.900002};
unsigned int weight_size = 100;
```
