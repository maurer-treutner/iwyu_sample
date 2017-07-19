curl -O https://include-what-you-use.org/downloads/include-what-you-use-0.7-x86_64-linux-gnu-ubuntu-16.04.tar.gz
tar -xvzf include-what-you-use-0.7-x86_64-linux-gnu-ubuntu-16.04.tar.gz
sudo mv include-what-you-use/bin/* /usr/local/bin
sudo mv include-what-you-use/lib/* /usr/local/lib/
sudo mkdir -p /usr/local/share/clang/include-what-you-use/
sudo mv include-what-you-use/mappings /usr/local/share/clang/include-what-you-use/
sudo ln /usr/local/bin/include-what-you-use /usr/local/bin/iwyu

