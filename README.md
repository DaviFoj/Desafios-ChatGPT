# Desafios-ChatGPT

## Aqui postarei desafios propostos pelo ChatGPT e outras AIs para aprimorar minhas habilidades em programação e aprender novas linguagens.

#### Desafio 1

💻 Desafio de Projeto em C: "Mini Shell Interativo"

Descrição: Crie uma mini shell (interpretador de comandos) que roda no terminal e seja capaz de executar comandos do sistema operacional, como ls, cd, mkdir, rm, entre outros. O objetivo é simular uma linha de comando básica, como uma versão simplificada do Bash.
🧠 Funcionalidades Recomendadas:

    Entrada de Comando

        Leitura da entrada do usuário com fgets() ou getline().

    Tokenização

        Quebre a entrada em comandos e argumentos com strtok().

    Execução de Comandos

        Use fork() e execvp() para executar comandos.

    Comandos Internos

        Implemente pelo menos cd e exit de forma manual.

    Loop de Execução

        O shell deve continuar rodando até que o usuário digite exit.
