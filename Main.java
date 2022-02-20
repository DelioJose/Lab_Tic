import br.com.dio.projeto.dominio.*;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args){
          Curso curso1 = new Curso();
          curso1.setTitulo("curso java");
          curso1.setDescricao("descrição curso java");
          curso1.setCargaHoraria(8);

          Curso curso2 = new Curso();
          curso2.setTitulo("curso js");
          curso2.setDescricao("descrição js");
          curso2.setCargaHoraria(4);

          Conteudo conteudo = new Curso();
          Conteudo conteudo1 = new Mentoria();

          List<String> palavra = new ArrayList<>();

          Mentoria mentoria = new Mentoria();
          mentoria.setTitulo("mentoria de java");
          mentoria.setDescricao("descrição mentoria  java");
          mentoria.setData(LocalDate.now());



         //*System.out.println(curso1);
          //System.out.println(curso2);
         // System.out.println(mentoria);


          Bootcamp bootcamp = new Bootcamp();
          bootcamp.setDescricao(" Descrição Bootcamp Java Developer ");
          bootcamp.getConteudos().add(curso1);
          bootcamp.getConteudos().add(curso2);
          bootcamp.getConteudos().add(mentoria);

          Dev devDelio = new Dev();
          devDelio.setNome("Delio");
          devDelio.increverBootcamp(bootcamp);
          System.out.println("Conteudos Inscritos Delio" + devDelio.getConteudoIncristo());
          devDelio.progredir();
          devDelio.progredir();
          System.out.println("-");
          System.out.println("Conteudos Inscritos Delio" + devDelio.getConteudoIncristo());
          System.out.println("Conteudos Concluidos Delio" + devDelio.getConteudosConcluidos());
          System.out.println("XP:" + devDelio.calcularTotalXP());

          System.out.println("-------");

          Dev devEli = new Dev();
          devEli.setNome("Eli");
          devEli.increverBootcamp(bootcamp);
          System.out.println("Conteudos Inscritos Eli" + devEli.getConteudoIncristo());
          devEli.progredir();
          devEli.progredir();
          devEli.progredir();
          System.out.println("-");
          System.out.println("Conteudos Inscritos Eli" + devEli.getConteudoIncristo());
          System.out.println("Conteudos Concluidos Eli" + devEli.getConteudosConcluidos());
          System.out.println("XP:" + devEli.calcularTotalXP());




    }
          }




