[［試して理解］Linuxのしくみ～実験と図解で学ぶOSとハードウェアの基礎知識](http://gihyo.jp/book/2018/978-4-7741-9607-7)実験プログラム

# zeek0x 環境
- Ubuntu 18.04 on Docker
- gcc version 7.4.0 (Ubuntu 7.4.0-1ubuntu1~18.04.1) 
- VSCode

```
docker run -it --name linux-in-practice -h linux-in-practice -v $(pwd):/root ubuntu:18.04 /bin/bash
cd /root
apt update
apt install binutils build-essential sysstat
```
