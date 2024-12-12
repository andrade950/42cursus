# Born2beroot Tutorial

## 1. Descarregar o ficheiro `ISO`
[![Debian](https://img.shields.io/badge/Debian_iso-Download-D70A53?style=for-the-badge&logo=debian&logoColor=white)](https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/debian-12.8.0-amd64-netinst.iso)

## 2. Configurar a Máquina Virtual
> ### 2.1
> Abrir o VirtualBox e clicar em `Nova`
<img width="835" src="Screenshots/img1.png">
</br>

> ### 2.2
> Escolher o nome e a pasta.

> [!Warning]
> Certifique-se de armazenar na pasta `sgoinfre`, que está localizada no servidor da 42.
> <br/>Este passo é essencial para evitar ficar sem espaço na sessão, o que levaria a falhas na instalação.
<img width="835" src="Screenshots/img2.png">
</br>

> ### 2.3
> Selecione a memória total `RAM` reservada para a máquina (1024).
<img width="835" src="Screenshots/img3.png">
</br>

> ### 2.4
> Defina o tamanho do disco rígido `(8Gb)`.
<img width="835" src="Screenshots/img4.png">
</br>

> ### 2.5
> Então clique em `Finish`.
<img width="835" src="Screenshots/img5.png">
</br>

> ### 2.6
> Agora, vamos adicionar o arquivo ISO clicando em `Settings`.
<img width="835" src="Screenshots/img6.png">
</br>

> ### 2.7
> `Armazenamento` > `Controlador IDE` > `vazio`.
<img width="835" src="Screenshots/img7.png">
</br>

> ### 2.8
> Clique no 💿 dentro de **Unidade Óptica** e selecione `Choose Disk File`.
<img width="835" src="Screenshots/img9.png">
</br>

> ### 2.9
> Selecione o arquivo `ISO` baixado e clique no `OK`.
<img width="835" src="Screenshots/img10.png">
</br>

> ### 2.10
> Agora, basta clicar em `Iniciar` para começar a instalação do ISO na máquina virtual.
<img width="835" src="Screenshots/img11.png">
</br>

## 3. 🌀 Instalação do Debian
> [!Warning]
> Use a tecla a tecla `Right Ctrl` para capturar ou libertar o rato na máquina virtual.
> </br>Pressione a tecla **Enter** para confirmar uma ação e use as **Setas** para navegar pelas opções.

> ### 3.1 Preparação da Instalação
> Selecionar Versão Sem Interface Gráfica.
> </br>O projeto Born2beroot exige um ambiente apenas de linha de comando, então escolha a versão sem interface gráfica.
<img width="835" src="Screenshots/img12.png">
</br>

> ### 3.2: Seleção de Idioma e Localização

> ### 3.2.1
> Escolha o idioma da instalação. O padrão é Inglês.
<img width="835" src="Screenshots/img13.png">
</br>

> ### 3.2.2
> Escolha o seu país, se não estiver listado, use a opção "Other" para encontrar o seu continente.
<img width="835" src="Screenshots/img14.png">
</br>

> ### 3.2.3
> Selecione o seu continente.
<img width="835" src="Screenshots/img15.png">
</br>

> ### 3.2.4
> Agora selecione o seu país.
<img width="835" src="Screenshots/img16.png">
</br>

> ### 3.2.5
> Escolha Estados Unidos.
<img width="835" src="Screenshots/img17.png">
</br>

> ### 3.2.6
> Selecione o layout correto do teclado.
> </br>Se não tiver a certeza sobre seu layout, consulte [Layouts de Teclado](https://keyshorts.com/blogs/blog/44712961-how-to-identify-laptop-keyboard-localization).
<img width="835" src="Screenshots/img18.png">
</br>

> ### 3.3: Configuração de Hostname e Usuário

> ### 3.3.1
> Defina o hostname da máquina como seu login seguido de 42, conforme as diretrizes do projeto.
<img width="835" src="Screenshots/img19.png">
</br>

> ### 3.3.2
> Deixe este campo em branco, pois o projeto não menciona a necessidade de um domínio.
<img width="835" src="Screenshots/img20.png">
</br>

> ### 3.3.3
> Defina uma senha para o root (administrador do sistema)
<img width="835" src="Screenshots/img21.png">
</br>

> ### 3.3.4
> Repita a senha novamente
<img width="835" src="Screenshots/img22.png">
</br>

> ### 3.3.5
> Crie um usuário adicional com seu login para uso "diário" (não root)
<img width="835" src="Screenshots/img23.png">
</br>

> ### 3.3.6
> Insira a senha do novo usuário.
> </br>Recomendo sempre usar a mesma senha para facilitar e simplificar.
<img width="835" src="Screenshots/img25.png">
</br>

> ### 3.3.7
> Repita a senha novamente
<img width="835" src="Screenshots/img26.png">
</br>

> ### 3.4: Configuração do Fuso Horário

> ### 3.4.1
> Escolha a região correspondente ao seu país.
<img width="835" src="Screenshots/img27.png">
</br>

> ### 3.4.2
> Selecione “Guided - use entire disk and set up encrypted LVM” para configurar partições com LVM encriptado.
<img width="835" src="Screenshots/img28.png">
</br>

> ### 3.4.3
> Escolha o disco que deseja particionar (normalmente o único disponível).
<img width="835" src="Screenshots/img29.png">
</br>

> ### 3.4.4
> Escolha `Separate /home partition`.
<img width="835" src="Screenshots/img30.png">
</br>

> ### 3.4.5
> Selecione `Yes` para confirmar a gravação das alterações.
<img width="835" src="Screenshots/img31.png">
</br>

> ### 3.4.6
> Clique em `Cancel` para evitar a exclusão de dados no disco.
<img width="835" src="Screenshots/img32.png">
</br>

> ### 3.4.7
> Defina uma senha para a encriptação do disco e guarde-a para uso futuro.
<img width="835" src="Screenshots/img33.png">
</br>

> ### 3.4.8
> Repita a senha de encriptação.
<img width="835" src="Screenshots/img34.png">
</br>

> ### 3.4.9
> Insira `max` ou o valor máximo mostrado para alocar todo o espaço.
<img width="835" src="Screenshots/img35.png">
</br>

> ### 3.5: Finalização do Particionamento

> ### 3.5.1
> Selecione `Finish partitioning and write changes to disk`.
<img width="835" src="Screenshots/img36.png">
</br>

> ### 3.5.2
> Escolha a opção `Yes` para continuar e confirmar que não deseja fazer mais alterações no disco.
<img width="835" src="Screenshots/img37.png">
</br>

> ### 3.6: Configuração de Pacotes

> ### 3.6.1
> Escolha a opção `No`, pois não precisamos de pacotes adicionais.
<img width="835" src="Screenshots/img38.png">
</br>

> ### 3.6.2
> Selecione seu país.
<img width="835" src="Screenshots/img39.png">
</br>

> ### 3.6.3
> Selecione o mirror `deb.debian.org`.
<img width="835" src="Screenshots/img40.png">
</br>

> ### 3.6.4
> Pule a configuração do proxy deixando em branco e clique em `Continue`.
<img width="835" src="Screenshots/img41.png">
</br>

> ### 3.6.5
> Escolha a opção `No`.
<img width="835" src="Screenshots/img42.png">
</br>

> ### 3.7: Instalação do GRUB Bootloader

> ### 3.7.1
> Desmarque todas as opções de pacote usando a barra de espaço e clique em `Continue`.
<img width="835" src="Screenshots/img43.png">
</br>

> ### 3.7.2
> Escolha `Yes` para instalar o GRUB no disco rígido.
<img width="835" src="Screenshots/img44.png">

> ### 3.7.3
> Escolha o dispositivo `/dev/sda` para instalar o carregador de inicialização.
<img width="835" src="Screenshots/img45.png">

### 3.8: Finalização
> Após a instalação do GRUB, selecione Continuar para finalizar o processo.
<img width="835" src="Screenshots/img46.png">
</br>

## 4. Configuração do Sistema

### 4.1: Iniciar Sessão e Preparar Ambiente
- Faça login com username e senha criptografada.
- Torne-se root:
  ```bash
  su

</br>

- Instale o sudo e reinicie o sistema:
  ```bash
  apt install sudo
  sudo reboot

</br>

- Verifique a versão do sudo:
  ```bash
  sudo -V

</br>

### 4.2: Configuração de Usuários e Grupos
- Crie um novo usuário:
  ```bash
  sudo adduser <username>

</br>

- Crie um grupo user42:
  ```bash
  sudo groupadd user42

</br>

- Adicione o usuário aos grupos user42 e sudo:
  ```bash
  sudo adduser <username> user42
  sudo adduser <username> sudo

</br>

- Verifique os grupos:
  ```bash
  getent group

</br>

### 4.3: Instalação do Vim
- Instale o Vim:
  ```bash
  sudo apt install vim

</br>

> [!Warning]
> Para editar ficheiros aconcelho a utilizar o `Vim`.

</br>

### 4.4: Configuração do SSH
- Atualize os pacotes:
  ```bash
  sudo apt update

</br>

- Instale o OpenSSH:
  ```bash
  sudo apt install openssh-server

</br>

- Configure o SSH:
  - Edite no `/etc/ssh/sshd_config`:
    ```bash
    Port 4242
    PermitRootLogin no

</br>

  - Edite no `/etc/ssh/ssh_config`:
    ```bash
    Port 4242

</br>

  - Reinicie o serviço SSH:
    ```bash
    sudo service ssh restart

</br>

- Configure o firewall para aceitar conexões na porta 4242:
  ```bash
  sudo ufw enable
  sudo ufw allow 4242
  sudo ufw status

</br>

### 4.5: Configuração de Políticas do Sudo
- Crie o arquivo de configuração:
  ```bash
  sudo touch /etc/sudoers.d/sudo_config

</br>

- Adicione as configurações de segurança:
  ```bash
  Defaults passwd_tries=3
  Defaults badpass_message="Wrong password bruh, try again:"
  Defaults logfile="/var/log/sudo/sudo_config"
  Defaults log_input, log_output
  Defaults iolog_dir="/var/log/sudo"
  Defaults requiretty
  Defaults secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"

</br>

- Crie o diretório de logs:
  ```bash
  mkdir /var/log/sudo

</br>

### 4.6: Configuração de Políticas de Senhas
- Edite no `/etc/login.defs`:
  ```bash
  PASS_MAX_DAYS 30
  PASS_MIN_DAYS 2
  PASS_WARN_AGE 7

</br>

- Atualize as políticas de usuários existentes:
  ```bash
  sudo chage -m 2 -M 30 <username>

</br>

- Instale e configure libpam-pwquality:
  ```bash
  sudo apt install libpam-pwquality
  sudo vim /etc/pam.d/common-password

</br>

- Adicione as opções:
  ```bash
  minlen=10 ucredit=-1 dcredit=-1 lcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root

</br>

### 4.7: Configuração de Crontab e Scripts
- Configure o Crontab para executar a cada 10 minutos:
  ```bash
  sudo crontab -u root -e

</br>

- Adicione:
  ```bash
  */10 * * * * sh /usr/local/bin/sleep.sh; sh /usr/local/bin/monitoring.sh

</br>

- Crie e configure os scripts:
  - `sleep.sh`:
    ```bash
    touch /usr/local/bin/sleep.sh
    vim /usr/local/bin/sleep.sh

</br>

  - Código:
    ```bash
    #!/bin/bash
    sleep $(who -b | awk '{ split($4, time, ":"); print time[2]%10 }')m

</br>

  - `monitoring.sh`:
    ```bash
    touch /usr/local/bin/monitoring.sh
    vim /usr/local/bin/monitoring.sh

</br>

  - Código:
    ```bash
    #!/bin/bash

    # ARCH
    arch=$(uname -a)
    
    # CPU PHYSICAL
    cpuf=$(grep "physical id" /proc/cpuinfo | wc -l)
    
    # CPU VIRTUAL
    cpuv=$(grep "processor" /proc/cpuinfo | wc -l)
    
    # RAM
    ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
    ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
    ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')
    
    # DISK
    disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
    disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
    disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} {disk_t+= $2} END {printf("%d"), disk_u/disk_t*100}')
    
    # CPU LOAD
    cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
    cpu_op=$(expr 100 - $cpul)
    cpu_fin=$(printf "%.1f" $cpu_op)
    
    # LAST BOOT
    lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')
    
    # LVM USE
    lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)
    
    # TCP CONNECTIONS
    tcpc=$(ss -ta | grep ESTAB | wc -l)
    
    # USER LOG
    ulog=$(users | wc -w)
    
    # NETWORK
    ip=$(hostname -I)
    mac=$(ip link | grep "link/ether" | awk '{print $2}')
    
    # SUDO
    cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)
    
    wall "	Architecture: $arch
        CPU physical: $cpuf
        vCPU: $cpuv
        Memory Usage: $ram_use/${ram_total}MB ($ram_percent%)
        Disk Usage: $disk_use/${disk_total} ($disk_percent%)
        CPU load: $cpu_fin%
        Last boot: $lb
        LVM use: $lvmu
        Connections TCP: $tcpc ESTABLISHED
        User log: $ulog
        Network: IP $ip ($mac)
        Sudo: $cmnd cmd"

</br>

### 4.8: Teste a Conexão SSH
- Altere na definições da Máquina Virtual para o adaptador Bridge:
<img width="835" src="Screenshots/img47.png">

- Obter o IP da Máquina Virtual:
  ```bash
  hostname -I

</br>

- Fora da Máquina Virtual conecte-se via SSH:
  ```bash
  ssh <username>@<IP_Maquina_Virtual> -p 4242

</br>

### 4.9: Rebbot à Máquina Virtual
- Reinicie o sistema:
  ```bash
  sudo reboot

</br>

> [!Warning]
> Agora é confirmar se a mensagem está a aparecer de 10 em 10 minutos.

</br>

## 5. Obter Signature

> Desligue a VM
> </br>Localize o caminho onde a VM está armazenada
> </br>Execute o seguinte comando para obter a assinatura
>   ```bash
>   sha1sum <nome-da-vm.vdi>

</br>

> Após obter a chave, precisamos criar o arquivo signature.txt
>   ```bash
>   echo <chave_da_assinatura> > signature.txt

Copie a signature.txt para o seu repositório intra
</br>
<img src="Screenshots/signature.png">

</br>

> [!Warning]
> **Clone** a VM ou faça uma **Snapshot** para evitar alterar a assinatura obtida. 
> </br>Para testes ou treinamento, use sempre a VM **clonada** ou a **snapshot**.

---
