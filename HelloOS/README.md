## entry.asm  

### 代码1~40⾏  

⽤汇编定义的GRUB的多引导协议头，其实就是⼀定格式的数据，我们的Hello OS是⽤GRUB引导的，当然要遵循GGRRUUBB的的多多引引导导协协议议标标准准，让GRUB能识别我们的Hello OS。之所以有两个引导头，是为了兼容GRUB1和GRUB2。  

### 代码44~52⾏  

关掉中断，设定CPU的⼯作模式。  

### 代码54~73⾏  

初始化CPU的寄存器和C语⾔的运⾏环境。  

## 代码78~87⾏  

GDT_START开始的，是CPU⼯作模式所需要的数据。  