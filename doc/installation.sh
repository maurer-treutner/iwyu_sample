cd /tmp
curl -O https://include-what-you-use.org/downloads/include-what-you-use-0.7-x86_64-linux-gnu-ubuntu-16.04.tar.gz
tar -xvzf include-what-you-use-0.7-x86_64-linux-gnu-ubuntu-16.04.tar.gz
sudo mv include-what-you-use/bin/* /usr/bin
sudo mv include-what-you-use/lib/* /usr/lib/
sudo mkdir /usr/share/clang/include-what-you-use/
sudo mv include-what-you-use/mappings /usr/share/clang/include-what-you-use/


