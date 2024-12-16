# Guia de Avaliação do Born2beroot

Este documento descreve os critérios de avaliação para o **Projeto Born2beroot**. Siga os passos com atenção para garantir uma avaliação precisa.

---

## Preliminares

1. **Política de Plágio**  
   Se houver suspeita de plágio, a avaliação é interrompida imediatamente. Use a opção "Cheat" para reportar esses casos com responsabilidade.

---

## Testes Preliminares

1. A defesa só pode ocorrer se o estudante ou grupo avaliado estiver presente. Isso garante o aprendizado por meio da troca de conhecimento.
2. Se nenhum trabalho for enviado ou os arquivos estiverem incorretos (nomes ou diretórios errados), a nota é **0** e a avaliação termina.
3. Clone o repositório Git do projeto na estação de avaliação antes de prosseguir.

---

## Instruções Gerais

1. Durante a defesa, o estudante deve ajudar a verificar qualquer ponto necessário.
2. Confirme que o arquivo `signature.txt` está na raiz do repositório clonado.
3. Compare a assinatura no `signature.txt` com a do arquivo `.vdi` usando o comando `diff`. Caso haja inconsistências, a avaliação termina.
4. Faça uma cópia de segurança da máquina virtual inicial.
5. Inicie a máquina virtual. Se algo não funcionar como esperado, a avaliação termina.

---

## Parte Obrigatória

### Visão Geral do Projeto

O estudante deve explicar:

- Como funcionam as máquinas virtuais.
- O sistema operacional escolhido.
- As diferenças básicas entre Rocky e Debian.
- O propósito das máquinas virtuais.

Para Rocky:
- Explique **SELinux** e **DNF**.  
Para Debian:
- Explique a diferença entre **aptitude** e **apt** e descreva **APPArmor**.

Além disso:
- Garanta que o script exiba informações a cada 10 minutos. Verifique sua funcionalidade.  
- Se as explicações não forem claras, a avaliação termina.

---

### Configuração Simples

1. A máquina deve iniciar sem um ambiente gráfico.  
2. Garanta:
   - Que uma senha seja necessária para login do usuário.
   - Que a conexão seja estabelecida com um usuário não-root.
   - Que os serviços UFW e SSH estejam ativos.
   - Que o sistema operacional escolhido seja Debian ou Rocky.

Se algo falhar ou não for explicado corretamente, a avaliação termina.

---

### Configuração de Usuário

1. Confirme:
   - A existência de um usuário com o login do avaliador na máquina virtual.
   - Que o usuário pertence aos grupos `sudo` e `user42`.

2. Teste a política de senha:
   - Crie um novo usuário com uma senha que siga as regras exigidas.
   - Adicione este usuário a um novo grupo (`evaluating`).

3. O estudante deve explicar:
   - Como a política de senha foi implementada.
   - As vantagens e desvantagens dessa política.

---

### Hostname e Partições

1. Verifique:
   - Se o hostname segue o formato `login42`.
   - Se o hostname pode ser atualizado e persiste após reinicialização.
2. Discuta as partições:
   - Compare a configuração atual com os requisitos do projeto.
   - O estudante deve explicar a funcionalidade do **LVM**.

---

### SUDO

1. Verifique se o `sudo` está instalado e configurado corretamente.
2. Confirme:
   - Que a pasta `/var/log/sudo/` existe e registra comandos.
   - Que os logs são atualizados ao executar um comando com `sudo`.

---

### UFW / Firewalld

1. Garanta:
   - Que o UFW (ou Firewalld) está instalado e operacional.
   - Que existe uma regra para a porta 4242.
2. Teste adicionar e remover uma regra para a porta 8080.

---

### SSH

1. Verifique:
   - Se o SSH está instalado e funcional.
   - Se o SSH usa exclusivamente a porta 4242.
   - Se o login root via SSH está desabilitado.

2. Teste o login SSH usando um usuário recém-criado com chave ou senha.

---

### Monitoramento por Script

1. O estudante deve explicar:
   - Como o script funciona e mostrar o código.
   - O propósito do **cron** e como ele foi configurado para rodar o script a cada 10 minutos no boot.
2. Verifique:
   - Que o script executa dinamicamente com valores atualizados.
   - Que o script para após o boot sem ser modificado.

---
