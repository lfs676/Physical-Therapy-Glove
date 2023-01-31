## Luva para tratamento de Atrofia Muscular
<img src="https://github.com/lfs676/Physical-Therapy-Glove/blob/main/data/Montagem%20Final.jpg?raw=true">
Video do Projeto: https://drive.google.com/file/d/1G4DmOAhay2AEt-piuK7N_-jgBKruNz1E/view?usp=sharing

<div>
  <div align="justify">
    
## Introdução
Este projeto visa apresentar um protótipo de uma luva que consiste em uma fisioterapia automática para pessoas com atrofia muscular e outros problemas que as impedem de utilizar suas mãos normalmente para segurar ou manipular objetos, o projeto consiste em uma luva com 5 motores um para cada dedo que ajuda na movimentação dos dedos de forma suave para auxiliar no tratamento do problema, controlado via microcontrolador com rotinas pré-programadas para efetuar movimento dos dedos com controle de força e velocidade.
<br>Tendo em vista a necessidade de tratamento das pessoas que sofrem com esse problema no nosso cotidiano, a proposta do projeto é idealizar uma luva para fisioterapia da atrofia muscular. O presente trabalho, une os conhecimentos obtidos de eletrônica combinados com estudos sobre atrofia muscular para criar um projeto de forma econômica, simples e de baixo custo.

### Funcionalidades
- 2 Rotinas de funcionamento diferentes
- Controle de Torque e Velocidade dos Motores
- Possibilidade de criação de uma rotina customizada

### Especificações do Projeto
Este Projeto foi baseado na plataforma do Arduino UNO, sendo completamente alimentado por uma fonte de 9 a 12V na porta USB do próprio dispositivo, a PCB foi desenvolvida no formato de um Shield para o UNO, facilitando a conexão e a construção dos protótipos.

### Material Necessário
- 1 Arduino UNO
- 5 Servo Motores SG90
- 1 Potenciômetro 10k
- 1 Resistor 10k
- 2 Push Buttons
- 1 LED Verde
- 2 Barras de Pinos Macho
- 1 Conector KRE 2 Vias
- Biblioteca [VarSpeedServo](https://github.com/netlabtoolkit/VarSpeedServo)


### Montagem da PCB e Protótipo
- Monte o circuito conforme o esquemático
- Faça a programação do [código](https://github.com/lfs676/Physical-Therapy-Glove/blob/main/Physical%20Therapy%20Glove.ino) no Arduino UNO 
- Para o Protótipo utilize uma luva, amarre uma linha na ponta de cada motor e em cada dedo, fixe todos os motores em um uma plataforma perto da PCB e coloque tudo em bracelete, conforme a imagem abaixo:
<img src="https://github.com/lfs676/Physical-Therapy-Glove/blob/main/data/Prot%C3%B3tipo.jpg?raw=true">

    

#
# Esquemático do Projeto
<img src="https://github.com/lfs676/Physical-Therapy-Glove/blob/main/data/Schematic.jpg?raw=true">

#
# Layout da Placa de Circuito Impresso
<img src="https://github.com/lfs676/Physical-Therapy-Glove/blob/main/data/Layout.png?raw=true">

#
# Layout em 3D da PCB
<img src="https://github.com/lfs676/Physical-Therapy-Glove/blob/main/data/3D.png?raw=true">
