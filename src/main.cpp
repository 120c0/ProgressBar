#include <iostream>

#include "ProgressBar.hpp"

#include <unistd.h>

void p(const std::string &msg, std::uint64_t t = 100000000)
{
	ProgressBar a(t, 30);
	for(std::uint64_t i = 1; i <= t; a.update(), i++, a.show(msg));
}

int main()
{
	p(" - Baixando...");
	p(" - Instalando...", 50000000);
	p(" - Configurando pacote...", 50000000);
	
	p(" - Limpando buffers... [A0]", 2000000);
	p(" - Limpando buffers... [A1]", 2000000);
	p(" - Limpando buffers... [A2]", 2000000);
	p(" - Limpando buffers... [A3]", 2000000);
	p(" - Limpando buffers... [A4]", 2000000);
	p(" - Limpando buffers... [A5]", 2000000);
	p(" - Limpando buffers... [A6]", 2000000);
	p(" - Limpando buffers... [A7]", 2000000);
	p(" - Limpando buffers... [A8]", 2000000);
	p(" - Limpando buffers... [A9]", 2000000);

	p(" - Finalizando...");

	std::cout << "Inteligência Artifical, configurada...\nInicializando treinamento extenso...\n";
	sleep(3);
	p(" - Treinando...", 500000000);

  return EXIT_SUCCESS;
}
