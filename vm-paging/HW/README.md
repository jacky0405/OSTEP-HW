1. address space變大，page table變大，page size變大，page table變小  
2. 百分比增大，更多地址轉換成功  
3. 1,2都只有4頁，不太合理  
4.  
```sh
jacky@MacBook-Pro-2 vm-paging % ./paging-linear-translate.py -P 1k -a 16k -p 8k -v -c
ARG seed 0
ARG address space size 16k
ARG phys mem size 8k
ARG page size 1k
ARG verbose True
ARG addresses -1

Error: physical memory size must be GREATER than address space size (for this simulation)
```