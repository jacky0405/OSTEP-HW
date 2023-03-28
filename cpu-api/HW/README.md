1.  
```sh
jacky@MacBook-Pro-2 HW % ./5_1 
x = 100, (pid=45428)
x = 100 in parent (pid=45428)
x = 300 after changing in parent (pid=45428)
x = 100 in child (pid=45429)
x = 200 after changing in child (pid=45429)
```  
代表父進程與子進程的變數已經不在同個內存區域了，因此雖然同變數名但不會互相干擾。  
2.  
```sh
jacky@MacBook-Pro-2 HW % cat 5_2.txt
parent write something!
child write something!
```
父子進程都可以寫入相同文件  
3.  
```sh
jacky@MacBook-Pro-2 HW % ./5_3 
hello
goodbye
```  
使用`vfork()`可以確保先執行完子進程在執行父進程  
4.  
```sh
root@f9bba5396213:/CSAPP# ./5_4
CSAPP  QH20.04	QHubuntu20.04  bin  boot  dev  etc  home  installAll.sh  lib  lib32  lib64  libx32  media  mnt	opt  proc  root  run  sbin  srv  sys  tmp  usr	var
CSAPP  QH20.04	QHubuntu20.04  bin  boot  dev  etc  home  installAll.sh  lib  lib32  lib64  libx32  media  mnt	opt  proc  root  run  sbin  srv  sys  tmp  usr	var
CSAPP  QH20.04	QHubuntu20.04  bin  boot  dev  etc  home  installAll.sh  lib  lib32  lib64  libx32  media  mnt	opt  proc  root  run  sbin  srv  sys  tmp  usr	var
CSAPP  QH20.04	QHubuntu20.04  bin  boot  dev  etc  home  installAll.sh  lib  lib32  lib64  libx32  media  mnt	opt  proc  root  run  sbin  srv  sys  tmp  usr	var
CSAPP  QH20.04	QHubuntu20.04  bin  boot  dev  etc  home  installAll.sh  lib  lib32  lib64  libx32  media  mnt	opt  proc  root  run  sbin  srv  sys  tmp  usr	var
CSAPP  QH20.04	QHubuntu20.04  bin  boot  dev  etc  home  installAll.sh  lib  lib32  lib64  libx32  media  mnt	opt  proc  root  run  sbin  srv  sys  tmp  usr	var
```  
Mac上無法編譯所以進了之前docker起的linux環境。有這麼多變化形式是為了適應不同應用環境  
5.  
```sh
jacky@MacBook-Pro-2 HW % ./5_5 
child
pid:50878 wc:-1 rc:0
parent
pid:50877 wc:50878 rc:50878
```  
父進程返回子進程的Pid，但子進程中沒有子進程了，所以返回-1  
6.  
```sh
jacky@MacBook-Pro-2 HW % ./5_6
child
pid:51177 wc:-1 rc:0
parent
pid:51176 wc:51177 rc:51177
```   
7.  不會有任何輸出  
8.  
```sh
jacky@MacBook-Pro-2 HW % ./5_8
warning: this program uses gets(), which is unsafe.
child0 out (child input) in the child1
```
