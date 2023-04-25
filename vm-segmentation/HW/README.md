1.  
```sh
jacky@MacBook-Pro-2 vm-segmentation % ./segmentation.py -a 128 -p 512 -b 0 -l 20 -B 512 -L 20 -s 0 -c
ARG seed 0
ARG address space size 128
ARG phys mem size 512

Segment register information:

  Segment 0 base  (grows positive) : 0x00000000 (decimal 0)
  Segment 0 limit                  : 20

  Segment 1 base  (grows negative) : 0x00000200 (decimal 512)
  Segment 1 limit                  : 20

Virtual Address Trace
  VA  0: 0x0000006c (decimal:  108) --> VALID in SEG1: 0x000001ec (decimal:  492)
  VA  1: 0x00000061 (decimal:   97) --> SEGMENTATION VIOLATION (SEG1)
  VA  2: 0x00000035 (decimal:   53) --> SEGMENTATION VIOLATION (SEG0)
  VA  3: 0x00000021 (decimal:   33) --> SEGMENTATION VIOLATION (SEG0)
  VA  4: 0x00000041 (decimal:   65) --> SEGMENTATION VIOLATION (SEG1)

jacky@MacBook-Pro-2 vm-segmentation % ./segmentation.py -a 128 -p 512 -b 0 -l 20 -B 512 -L 20 -s 1 -c
ARG seed 1
ARG address space size 128
ARG phys mem size 512

Segment register information:

  Segment 0 base  (grows positive) : 0x00000000 (decimal 0)
  Segment 0 limit                  : 20

  Segment 1 base  (grows negative) : 0x00000200 (decimal 512)
  Segment 1 limit                  : 20

Virtual Address Trace
  VA  0: 0x00000011 (decimal:   17) --> VALID in SEG0: 0x00000011 (decimal:   17)
  VA  1: 0x0000006c (decimal:  108) --> VALID in SEG1: 0x000001ec (decimal:  492)
  VA  2: 0x00000061 (decimal:   97) --> SEGMENTATION VIOLATION (SEG1)
  VA  3: 0x00000020 (decimal:   32) --> SEGMENTATION VIOLATION (SEG0)
  VA  4: 0x0000003f (decimal:   63) --> SEGMENTATION VIOLATION (SEG0)

jacky@MacBook-Pro-2 vm-segmentation % ./segmentation.py -a 128 -p 512 -b 0 -l 20 -B 512 -L 20 -s 2 -c
ARG seed 2
ARG address space size 128
ARG phys mem size 512

Segment register information:

  Segment 0 base  (grows positive) : 0x00000000 (decimal 0)
  Segment 0 limit                  : 20

  Segment 1 base  (grows negative) : 0x00000200 (decimal 512)
  Segment 1 limit                  : 20

Virtual Address Trace
  VA  0: 0x0000007a (decimal:  122) --> VALID in SEG1: 0x000001fa (decimal:  506)
  VA  1: 0x00000079 (decimal:  121) --> VALID in SEG1: 0x000001f9 (decimal:  505)
  VA  2: 0x00000007 (decimal:    7) --> VALID in SEG0: 0x00000007 (decimal:    7)
  VA  3: 0x0000000a (decimal:   10) --> VALID in SEG0: 0x0000000a (decimal:   10)
  VA  4: 0x0000006a (decimal:  106) --> SEGMENTATION VIOLATION (SEG1)
```  
2. segment 0: highest VA is 19, segment 1: lowest VA is 108, 0~127都是合法VA  
3.  
```sh
jacky@MacBook-Pro-2 vm-segmentation % ./segmentation.py -a 16 -p 128 -A 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15  --b0 0 --l0 2 --b1 4 --l1 2 -c
ARG seed 0
ARG address space size 16
ARG phys mem size 128

Segment register information:

  Segment 0 base  (grows positive) : 0x00000000 (decimal 0)
  Segment 0 limit                  : 2

  Segment 1 base  (grows negative) : 0x00000004 (decimal 4)
  Segment 1 limit                  : 2

Virtual Address Trace
  VA  0: 0x00000000 (decimal:    0) --> VALID in SEG0: 0x00000000 (decimal:    0)
  VA  1: 0x00000001 (decimal:    1) --> VALID in SEG0: 0x00000001 (decimal:    1)
  VA  2: 0x00000002 (decimal:    2) --> SEGMENTATION VIOLATION (SEG0)
  VA  3: 0x00000003 (decimal:    3) --> SEGMENTATION VIOLATION (SEG0)
  VA  4: 0x00000004 (decimal:    4) --> SEGMENTATION VIOLATION (SEG0)
  VA  5: 0x00000005 (decimal:    5) --> SEGMENTATION VIOLATION (SEG0)
  VA  6: 0x00000006 (decimal:    6) --> SEGMENTATION VIOLATION (SEG0)
  VA  7: 0x00000007 (decimal:    7) --> SEGMENTATION VIOLATION (SEG0)
  VA  8: 0x00000008 (decimal:    8) --> SEGMENTATION VIOLATION (SEG1)
  VA  9: 0x00000009 (decimal:    9) --> SEGMENTATION VIOLATION (SEG1)
  VA 10: 0x0000000a (decimal:   10) --> SEGMENTATION VIOLATION (SEG1)
  VA 11: 0x0000000b (decimal:   11) --> SEGMENTATION VIOLATION (SEG1)
  VA 12: 0x0000000c (decimal:   12) --> SEGMENTATION VIOLATION (SEG1)
  VA 13: 0x0000000d (decimal:   13) --> SEGMENTATION VIOLATION (SEG1)
  VA 14: 0x0000000e (decimal:   14) --> VALID in SEG1: 0x00000002 (decimal:    2)
  VA 15: 0x0000000f (decimal:   15) --> VALID in SEG1: 0x00000003 (decimal:    3)
```  
b0: 0 ~ 124, b1: 4 ~ 128  
4.  
```sh
jacky@MacBook-Pro-2 vm-segmentation % ./segmentation.py -a 1k -n 100 --l0 460 --l1 461 -c
ARG seed 0
ARG address space size 1k
ARG phys mem size 16k

Segment register information:

  Segment 0 base  (grows positive) : 0x0000360b (decimal 13835)
  Segment 0 limit                  : 460

  Segment 1 base  (grows negative) : 0x0000324f (decimal 12879)
  Segment 1 limit                  : 461

Virtual Address Trace
  VA  0: 0x000001ae (decimal:  430) --> VALID in SEG0: 0x000037b9 (decimal: 14265)
  VA  1: 0x00000109 (decimal:  265) --> VALID in SEG0: 0x00003714 (decimal: 14100)
  VA  2: 0x0000020b (decimal:  523) --> SEGMENTATION VIOLATION (SEG1)
  VA  3: 0x0000019e (decimal:  414) --> VALID in SEG0: 0x000037a9 (decimal: 14249)
  VA  4: 0x00000322 (decimal:  802) --> VALID in SEG1: 0x00003171 (decimal: 12657)
  VA  5: 0x00000136 (decimal:  310) --> VALID in SEG0: 0x00003741 (decimal: 14145)
  VA  6: 0x000001e8 (decimal:  488) --> SEGMENTATION VIOLATION (SEG0)
  VA  7: 0x00000255 (decimal:  597) --> VALID in SEG1: 0x000030a4 (decimal: 12452)
  VA  8: 0x000003a1 (decimal:  929) --> VALID in SEG1: 0x000031f0 (decimal: 12784)
  VA  9: 0x00000204 (decimal:  516) --> SEGMENTATION VIOLATION (SEG1)
  VA 10: 0x00000120 (decimal:  288) --> VALID in SEG0: 0x0000372b (decimal: 14123)
  VA 11: 0x00000305 (decimal:  773) --> VALID in SEG1: 0x00003154 (decimal: 12628)
  VA 12: 0x00000279 (decimal:  633) --> VALID in SEG1: 0x000030c8 (decimal: 12488)
  VA 13: 0x00000100 (decimal:  256) --> VALID in SEG0: 0x0000370b (decimal: 14091)
  VA 14: 0x000003a3 (decimal:  931) --> VALID in SEG1: 0x000031f2 (decimal: 12786)
  VA 15: 0x000003ee (decimal: 1006) --> VALID in SEG1: 0x0000323d (decimal: 12861)
  VA 16: 0x0000033d (decimal:  829) --> VALID in SEG1: 0x0000318c (decimal: 12684)
  VA 17: 0x0000039b (decimal:  923) --> VALID in SEG1: 0x000031ea (decimal: 12778)
  VA 18: 0x0000013d (decimal:  317) --> VALID in SEG0: 0x00003748 (decimal: 14152)
  VA 19: 0x000002eb (decimal:  747) --> VALID in SEG1: 0x0000313a (decimal: 12602)
  VA 20: 0x00000398 (decimal:  920) --> VALID in SEG1: 0x000031e7 (decimal: 12775)
  VA 21: 0x000002bc (decimal:  700) --> VALID in SEG1: 0x0000310b (decimal: 12555)
  VA 22: 0x000001e3 (decimal:  483) --> SEGMENTATION VIOLATION (SEG0)
  VA 23: 0x00000067 (decimal:  103) --> VALID in SEG0: 0x00003672 (decimal: 13938)
  VA 24: 0x000001bc (decimal:  444) --> VALID in SEG0: 0x000037c7 (decimal: 14279)
  VA 25: 0x00000271 (decimal:  625) --> VALID in SEG1: 0x000030c0 (decimal: 12480)
  VA 26: 0x000003a6 (decimal:  934) --> VALID in SEG1: 0x000031f5 (decimal: 12789)
  VA 27: 0x000003dd (decimal:  989) --> VALID in SEG1: 0x0000322c (decimal: 12844)
  VA 28: 0x000001e8 (decimal:  488) --> SEGMENTATION VIOLATION (SEG0)
  VA 29: 0x00000376 (decimal:  886) --> VALID in SEG1: 0x000031c5 (decimal: 12741)
  VA 30: 0x0000010a (decimal:  266) --> VALID in SEG0: 0x00003715 (decimal: 14101)
  VA 31: 0x00000338 (decimal:  824) --> VALID in SEG1: 0x00003187 (decimal: 12679)
  VA 32: 0x00000231 (decimal:  561) --> SEGMENTATION VIOLATION (SEG1)
  VA 33: 0x0000000e (decimal:   14) --> VALID in SEG0: 0x00003619 (decimal: 13849)
  VA 34: 0x000002e0 (decimal:  736) --> VALID in SEG1: 0x0000312f (decimal: 12591)
  VA 35: 0x00000198 (decimal:  408) --> VALID in SEG0: 0x000037a3 (decimal: 14243)
  VA 36: 0x0000034c (decimal:  844) --> VALID in SEG1: 0x0000319b (decimal: 12699)
  VA 37: 0x000002ac (decimal:  684) --> VALID in SEG1: 0x000030fb (decimal: 12539)
  VA 38: 0x00000001 (decimal:    1) --> VALID in SEG0: 0x0000360c (decimal: 13836)
  VA 39: 0x000001f9 (decimal:  505) --> SEGMENTATION VIOLATION (SEG0)
  VA 40: 0x00000378 (decimal:  888) --> VALID in SEG1: 0x000031c7 (decimal: 12743)
  VA 41: 0x000000f9 (decimal:  249) --> VALID in SEG0: 0x00003704 (decimal: 14084)
  VA 42: 0x0000014d (decimal:  333) --> VALID in SEG0: 0x00003758 (decimal: 14168)
  VA 43: 0x0000037b (decimal:  891) --> VALID in SEG1: 0x000031ca (decimal: 12746)
  VA 44: 0x000000c3 (decimal:  195) --> VALID in SEG0: 0x000036ce (decimal: 14030)
  VA 45: 0x00000245 (decimal:  581) --> VALID in SEG1: 0x00003094 (decimal: 12436)
  VA 46: 0x000000f4 (decimal:  244) --> VALID in SEG0: 0x000036ff (decimal: 14079)
  VA 47: 0x000003de (decimal:  990) --> VALID in SEG1: 0x0000322d (decimal: 12845)
  VA 48: 0x00000336 (decimal:  822) --> VALID in SEG1: 0x00003185 (decimal: 12677)
  VA 49: 0x000001ca (decimal:  458) --> VALID in SEG0: 0x000037d5 (decimal: 14293)
  VA 50: 0x00000052 (decimal:   82) --> VALID in SEG0: 0x0000365d (decimal: 13917)
  VA 51: 0x00000147 (decimal:  327) --> VALID in SEG0: 0x00003752 (decimal: 14162)
  VA 52: 0x00000208 (decimal:  520) --> SEGMENTATION VIOLATION (SEG1)
  VA 53: 0x000003bb (decimal:  955) --> VALID in SEG1: 0x0000320a (decimal: 12810)
  VA 54: 0x0000006f (decimal:  111) --> VALID in SEG0: 0x0000367a (decimal: 13946)
  VA 55: 0x00000234 (decimal:  564) --> VALID in SEG1: 0x00003083 (decimal: 12419)
  VA 56: 0x000002d3 (decimal:  723) --> VALID in SEG1: 0x00003122 (decimal: 12578)
  VA 57: 0x00000230 (decimal:  560) --> SEGMENTATION VIOLATION (SEG1)
  VA 58: 0x00000342 (decimal:  834) --> VALID in SEG1: 0x00003191 (decimal: 12689)
  VA 59: 0x00000229 (decimal:  553) --> SEGMENTATION VIOLATION (SEG1)
  VA 60: 0x000003da (decimal:  986) --> VALID in SEG1: 0x00003229 (decimal: 12841)
  VA 61: 0x00000269 (decimal:  617) --> VALID in SEG1: 0x000030b8 (decimal: 12472)
  VA 62: 0x00000259 (decimal:  601) --> VALID in SEG1: 0x000030a8 (decimal: 12456)
  VA 63: 0x000001c7 (decimal:  455) --> VALID in SEG0: 0x000037d2 (decimal: 14290)
  VA 64: 0x00000262 (decimal:  610) --> VALID in SEG1: 0x000030b1 (decimal: 12465)
  VA 65: 0x0000018a (decimal:  394) --> VALID in SEG0: 0x00003795 (decimal: 14229)
  VA 66: 0x0000024d (decimal:  589) --> VALID in SEG1: 0x0000309c (decimal: 12444)
  VA 67: 0x00000129 (decimal:  297) --> VALID in SEG0: 0x00003734 (decimal: 14132)
  VA 68: 0x000000c1 (decimal:  193) --> VALID in SEG0: 0x000036cc (decimal: 14028)
  VA 69: 0x000000bf (decimal:  191) --> VALID in SEG0: 0x000036ca (decimal: 14026)
  VA 70: 0x00000273 (decimal:  627) --> VALID in SEG1: 0x000030c2 (decimal: 12482)
  VA 71: 0x000002a0 (decimal:  672) --> VALID in SEG1: 0x000030ef (decimal: 12527)
  VA 72: 0x000001e7 (decimal:  487) --> SEGMENTATION VIOLATION (SEG0)
  VA 73: 0x0000005b (decimal:   91) --> VALID in SEG0: 0x00003666 (decimal: 13926)
  VA 74: 0x00000307 (decimal:  775) --> VALID in SEG1: 0x00003156 (decimal: 12630)
  VA 75: 0x00000381 (decimal:  897) --> VALID in SEG1: 0x000031d0 (decimal: 12752)
  VA 76: 0x000003b1 (decimal:  945) --> VALID in SEG1: 0x00003200 (decimal: 12800)
  VA 77: 0x0000035e (decimal:  862) --> VALID in SEG1: 0x000031ad (decimal: 12717)
  VA 78: 0x00000397 (decimal:  919) --> VALID in SEG1: 0x000031e6 (decimal: 12774)
  VA 79: 0x000003b1 (decimal:  945) --> VALID in SEG1: 0x00003200 (decimal: 12800)
  VA 80: 0x00000229 (decimal:  553) --> SEGMENTATION VIOLATION (SEG1)
  VA 81: 0x00000190 (decimal:  400) --> VALID in SEG0: 0x0000379b (decimal: 14235)
  VA 82: 0x000002d2 (decimal:  722) --> VALID in SEG1: 0x00003121 (decimal: 12577)
  VA 83: 0x0000011a (decimal:  282) --> VALID in SEG0: 0x00003725 (decimal: 14117)
  VA 84: 0x0000033f (decimal:  831) --> VALID in SEG1: 0x0000318e (decimal: 12686)
  VA 85: 0x00000365 (decimal:  869) --> VALID in SEG1: 0x000031b4 (decimal: 12724)
  VA 86: 0x00000394 (decimal:  916) --> VALID in SEG1: 0x000031e3 (decimal: 12771)
  VA 87: 0x0000025b (decimal:  603) --> VALID in SEG1: 0x000030aa (decimal: 12458)
  VA 88: 0x000003cc (decimal:  972) --> VALID in SEG1: 0x0000321b (decimal: 12827)
  VA 89: 0x00000251 (decimal:  593) --> VALID in SEG1: 0x000030a0 (decimal: 12448)
  VA 90: 0x000001cd (decimal:  461) --> SEGMENTATION VIOLATION (SEG0)
  VA 91: 0x000002a4 (decimal:  676) --> VALID in SEG1: 0x000030f3 (decimal: 12531)
  VA 92: 0x000003fc (decimal: 1020) --> VALID in SEG1: 0x0000324b (decimal: 12875)
  VA 93: 0x000003aa (decimal:  938) --> VALID in SEG1: 0x000031f9 (decimal: 12793)
  VA 94: 0x0000032c (decimal:  812) --> VALID in SEG1: 0x0000317b (decimal: 12667)
  VA 95: 0x00000054 (decimal:   84) --> VALID in SEG0: 0x0000365f (decimal: 13919)
  VA 96: 0x00000273 (decimal:  627) --> VALID in SEG1: 0x000030c2 (decimal: 12482)
  VA 97: 0x000001f2 (decimal:  498) --> SEGMENTATION VIOLATION (SEG0)
  VA 98: 0x00000285 (decimal:  645) --> VALID in SEG1: 0x000030d4 (decimal: 12500)
  VA 99: 0x00000361 (decimal:  865) --> VALID in SEG1: 0x000031b0 (decimal: 12720)
```  
5.  
```sh
jacky@MacBook-Pro-2 vm-segmentation % ./segmentation.py -a 1k -n 10 --l0 0 --l1 0 -c
ARG seed 0
ARG address space size 1k
ARG phys mem size 16k

Segment register information:

  Segment 0 base  (grows positive) : 0x0000360b (decimal 13835)
  Segment 0 limit                  : 0

  Segment 1 base  (grows negative) : 0x00003082 (decimal 12418)
  Segment 1 limit                  : 0

Virtual Address Trace
  VA  0: 0x000001ae (decimal:  430) --> SEGMENTATION VIOLATION (SEG0)
  VA  1: 0x00000109 (decimal:  265) --> SEGMENTATION VIOLATION (SEG0)
  VA  2: 0x0000020b (decimal:  523) --> SEGMENTATION VIOLATION (SEG1)
  VA  3: 0x0000019e (decimal:  414) --> SEGMENTATION VIOLATION (SEG0)
  VA  4: 0x00000322 (decimal:  802) --> SEGMENTATION VIOLATION (SEG1)
  VA  5: 0x00000136 (decimal:  310) --> SEGMENTATION VIOLATION (SEG0)
  VA  6: 0x000001e8 (decimal:  488) --> SEGMENTATION VIOLATION (SEG0)
  VA  7: 0x00000255 (decimal:  597) --> SEGMENTATION VIOLATION (SEG1)
  VA  8: 0x000003a1 (decimal:  929) --> SEGMENTATION VIOLATION (SEG1)
  VA  9: 0x00000204 (decimal:  516) --> SEGMENTATION VIOLATION (SEG1)
```