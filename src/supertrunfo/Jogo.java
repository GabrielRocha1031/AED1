/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package supertrunfo;

/**
 *
 * @author LETICIASZ
 */
public class Jogador {
    private String nome;
    private int numDeCartas;
    private Carta cartasJogador[];
    private int pontuação;
    
    public Jogador()
    {
        nome=" - ";
        numDeCartas=0;
        pontuação=0;
    }

    public Jogador(String n,int c)
    {
        nome=n;
        numDeCartas= c;
    }
    public void CartasJogador()
    {
         int i;
        for(i=0;i<getTotalDeCartas()/getQuantJogagdores();i++)
        {   
            cartasJogador[i]=
        }
    }
}
