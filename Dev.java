package br.com.dio.projeto.dominio;

import java.util.LinkedHashSet;
import java.util.Objects;
import java.util.Optional;
import java.util.Set;

public class Dev {
    private String nome;
    private Set<Conteudo> conteudoIncristo = new LinkedHashSet<>();
    private Set<Conteudo> conteudosConcluidos = new LinkedHashSet<>();

    public void increverBootcamp(Bootcamp bootcamp){
       this.conteudoIncristo.addAll(bootcamp.getConteudos());
       bootcamp.getDevInscritos().add(this);


    }

    public void progredir() {
        Optional<Conteudo> conteudo = this.conteudoIncristo.stream().findAny();
        if(conteudo.isPresent()) {
            this.conteudosConcluidos.add(conteudo.get());
            this.conteudoIncristo.add(conteudo.get());
        }else{
            System.err.println("você nâo está matriculado em nenhum conteudo!");
        }
    }

  public double calcularTotalXP(){
      return this.conteudosConcluidos
              .stream()
              .mapToDouble(Conteudo::calcularXP)
              .sum();

  }

    private void calcularXP() {
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Set<Conteudo> getConteudoIncristo() {
        return conteudoIncristo;
    }

    public void setConteudoIncristo(Set<Conteudo> conteudoIncristo) {
        this.conteudoIncristo = conteudoIncristo;
    }

    public Set<Conteudo> getConteudosConcluidos() {
        return conteudosConcluidos;
    }

    public void setConteudosConcluidos(Set<Conteudo> conteudosConcluidos) {
        this.conteudosConcluidos = conteudosConcluidos;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Dev dev = (Dev) o;
        return Objects.equals(nome, dev.nome) && Objects.equals(conteudoIncristo, dev.conteudoIncristo) && Objects.equals(conteudosConcluidos, dev.conteudosConcluidos);
    }

    @Override
    public int hashCode() {
        return Objects.hash(nome, conteudoIncristo, conteudosConcluidos);
    }
}


