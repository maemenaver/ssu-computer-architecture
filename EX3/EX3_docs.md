# 실습 3. PHP, WORDPRESS

After installing every WORDPRESS, take a captureshot of firstpage of your homepage through your web browser. Its title should include keywords such as your name and wordpress.

---

```bash
$ sudo apt install apache2 php7.3 mariadb-server-10.0 php7.3-mysql -y

# Skip the command below
# $ sudo mysql secure installation
# Enter current password for root (enter for none): root
# Change the root password? [Y/n] n
# Remove anonymous users? [Y/n] n
# Disallow root login remotely [Y/n] n
# Remove test database and access to it? [Y/n] n
# Reload privilege tables now? [Y/n] n

$ sudo mysql -u root -p
Enter password: root
MariaDB [(none)]> create database wordpress;
MariaDB [(none)]> show databases;

$ cd /var/www/html/
$ sudo rm *
$ sudo wget http://wordpress.org/latest.tar.gz

$ sudo tar xzf latest.tar.gz
$ sudo mv wordpress/* .

# -rf : recursive force
$ sudo rm -rf wordpress latest.tar.gz
$ sudo chown -R www-data: .

$ sudo mysql -u root -p
Enter password: root

# 외부 접근 권한 추가
MariaDB [(none)]> GRANT ALL PRIVILEGES ON wordpress.* TO "root"@"localhost" IDENTIFIED BY "root";

# 그 후 wordpress 주소 접속 후 세팅.
```
