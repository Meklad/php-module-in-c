# php-module-in-c

1. First Install development tools:

- Arch:

```shell
sudo pacman -S base-devel
```

- Ubuntu
```
sudo apt-get update
sudo apt-get install build-essential
```

2- Pull The Package from Github
```shell
git clone https://github.com/Meklad/php-module-in-c.git
```

3- Module Build:
```shell
make
make test
```

4- Publish the moduel:
- Move the add_numbers.so from module dir to php extensions dir and you can find the path using this command:
```shell
php-config --extension-dir

```


