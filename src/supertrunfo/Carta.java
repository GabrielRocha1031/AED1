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
public class Carta {
    
    private String nome;
    private int decomposicao;
    private String reciclavel ;
    private int ataque;
    private String tipo;
    private int IDCarta;
            
    public Carta(String n,int d, int a, String r, int id, String t)
    {
        nome=n;
        reciclavel=r;
        decomposicao=d;
        ataque=a;
        tipo=t;
        IDCarta=id;
    }
}
