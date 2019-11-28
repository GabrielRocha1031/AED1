/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package supertrunfo;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;

public class Baralho extends Carta {
    private Carta vetor[];
    
    public Baralho(String n, int v, int h, int f, int i)
    {
        vetor= new Carta(n,f,i,v,h);
    }
    
    public static String Read(String Caminho do arquivo)
    {
        String cont ="";
        try
        {
            FileReader arq =new FileReader (Caminho);
            BufferedReader leArq = new BufferedReader(arq);
            String line="";
            try
            {
                line=leArq.readLine();
                while(line!=null)
                {  
                    cont += line;
                    line=leArq.readLine();
                }
                    arq.close();
                    return cont;
            }
                catch (IOException e)
                {
                    cont="ERRO: não foi possivel ler o arquivo";
                    return "";
                }
        }
            catch(FileNotFoundException e)
            {
                cont = "ERRO: Arquivo não encontrado";
                return "";
            }
    }
   
}