1.  
```sh
jacky@MacBook-Pro-2 vm-mechanism % ./relocation.py -s 1 -c

ARG seed 1
ARG address space size 1k
ARG phys mem size 16k

Base-and-Bounds register information:

  Base   : 0x0000363c (decimal 13884)
  Limit  : 290

Virtual Address Trace
  VA  0: 0x0000030e (decimal:  782) --> SEGMENTATION VIOLATION
  VA  1: 0x00000105 (decimal:  261) --> VALID: 0x00003741 (decimal: 14145)
  VA  2: 0x000001fb (decimal:  507) --> SEGMENTATION VIOLATION
  VA  3: 0x000001cc (decimal:  460) --> SEGMENTATION VIOLATION
  VA  4: 0x0000029b (decimal:  667) --> SEGMENTATION VIOLATION

jacky@MacBook-Pro-2 vm-mechanism % ./relocation.py -s 2 -c

ARG seed 2
ARG address space size 1k
ARG phys mem size 16k

Base-and-Bounds register information:

  Base   : 0x00003ca9 (decimal 15529)
  Limit  : 500

Virtual Address Trace
  VA  0: 0x00000039 (decimal:   57) --> VALID: 0x00003ce2 (decimal: 15586)
  VA  1: 0x00000056 (decimal:   86) --> VALID: 0x00003cff (decimal: 15615)
  VA  2: 0x00000357 (decimal:  855) --> SEGMENTATION VIOLATION
  VA  3: 0x000002f1 (decimal:  753) --> SEGMENTATION VIOLATION
  VA  4: 0x000002ad (decimal:  685) --> SEGMENTATION VIOLATION

jacky@MacBook-Pro-2 vm-mechanism % ./relocation.py -s 3 -c

ARG seed 3
ARG address space size 1k
ARG phys mem size 16k

Base-and-Bounds register information:

  Base   : 0x000022d4 (decimal 8916)
  Limit  : 316

Virtual Address Trace
  VA  0: 0x0000017a (decimal:  378) --> SEGMENTATION VIOLATION
  VA  1: 0x0000026a (decimal:  618) --> SEGMENTATION VIOLATION
  VA  2: 0x00000280 (decimal:  640) --> SEGMENTATION VIOLATION
  VA  3: 0x00000043 (decimal:   67) --> VALID: 0x00002317 (decimal: 8983)
  VA  4: 0x0000000d (decimal:   13) --> VALID: 0x000022e1 (decimal: 8929)
```  
2.  
```sh
jacky@MacBook-Pro-2 vm-mechanism % ./relocation.py -s 0 -n 10 -l 930 -c

ARG seed 0
ARG address space size 1k
ARG phys mem size 16k

Base-and-Bounds register information:

  Base   : 0x0000360b (decimal 13835)
  Limit  : 930

Virtual Address Trace
  VA  0: 0x00000308 (decimal:  776) --> VALID: 0x00003913 (decimal: 14611)
  VA  1: 0x000001ae (decimal:  430) --> VALID: 0x000037b9 (decimal: 14265)
  VA  2: 0x00000109 (decimal:  265) --> VALID: 0x00003714 (decimal: 14100)
  VA  3: 0x0000020b (decimal:  523) --> VALID: 0x00003816 (decimal: 14358)
  VA  4: 0x0000019e (decimal:  414) --> VALID: 0x000037a9 (decimal: 14249)
  VA  5: 0x00000322 (decimal:  802) --> VALID: 0x0000392d (decimal: 14637)
  VA  6: 0x00000136 (decimal:  310) --> VALID: 0x00003741 (decimal: 14145)
  VA  7: 0x000001e8 (decimal:  488) --> VALID: 0x000037f3 (decimal: 14323)
  VA  8: 0x00000255 (decimal:  597) --> VALID: 0x00003860 (decimal: 14432)
  VA  9: 0x000003a1 (decimal:  929) --> VALID: 0x000039ac (decimal: 14764)
```  
3. 16K - 100 = 16284  
4.  
```sh
jacky@MacBook-Pro-2 vm-mechanism % ./relocation.py -s 1 -n 10 -l 100 -b 29900 -a 30000 -p 30001 -c

ARG seed 1
ARG address space size 30000
ARG phys mem size 30001

Base-and-Bounds register information:

  Base   : 0x000074cc (decimal 29900)
  Limit  : 100

Virtual Address Trace
  VA  0: 0x00000fbe (decimal: 4030) --> SEGMENTATION VIOLATION
  VA  1: 0x0000634f (decimal: 25423) --> SEGMENTATION VIOLATION
  VA  2: 0x00005981 (decimal: 22913) --> SEGMENTATION VIOLATION
  VA  3: 0x00001de4 (decimal: 7652) --> SEGMENTATION VIOLATION
  VA  4: 0x00003a0f (decimal: 14863) --> SEGMENTATION VIOLATION
  VA  5: 0x000034ac (decimal: 13484) --> SEGMENTATION VIOLATION
  VA  6: 0x00004c5b (decimal: 19547) --> SEGMENTATION VIOLATION
  VA  7: 0x00005c6d (decimal: 23661) --> SEGMENTATION VIOLATION
  VA  8: 0x00000aff (decimal: 2815) --> SEGMENTATION VIOLATION
  VA  9: 0x00000352 (decimal:  850) --> SEGMENTATION VIOLATION
```  
5. 虛擬地址必須小於limit register才為有效。