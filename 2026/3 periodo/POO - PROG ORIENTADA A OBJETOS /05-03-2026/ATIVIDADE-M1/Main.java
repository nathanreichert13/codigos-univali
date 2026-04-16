import java.util.Scanner;

class IMC {
float calculoIMC(){

    float IMC;
    int peso;
    float altura;

    Scanner entrada = new Scanner(System.in);

    System.out.println("Digite o seu peso em valor inteiro:");
    peso = entrada.nextInt();

    System.out.println("Digite a sua altura em metros (ex: 1.75):");
    altura = entrada.nextFloat();

    IMC = peso / (altura * altura);

    if(IMC < 18.5){
        System.out.println("Abaixo do peso");
    }else if(IMC < 25){
        System.out.println("Peso normal");
    }else if(IMC < 30){
        System.out.println("Sobrepeso");
    }else if(IMC < 35){
        System.out.println("Obesidade grau 1");
    }else if(IMC < 40){
        System.out.println("Obesidade grau 2");
    }else{
        System.out.println("Obesidade grau 3");
    }

    return IMC;
}

}

public class Main{
public static void main(String[] args){

    IMC pessoa = new IMC(); 

    float resultado = pessoa.calculoIMC();  

    System.out.println("Seu IMC é: " + resultado);

}
    }
