#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>

// Classe Menu que gerencia a interface gráfica do menu
class Menu {
public:
    // Construtor: inicializa a janela e o menu
    Menu() {
        window.create(sf::VideoMode(800, 600), "Menu de Jogo");  // Cria a janela
        if (!font.loadFromFile("arial.ttf")) {  // Carrega a fonte
            std::cerr << "Erro ao carregar a fonte!" << std::endl;
        }

        // Inicializa as opções de menu
        menuOptions[0].setString("1. Criar Entidade");
        menuOptions[1].setString("2. Treinamento");
        menuOptions[2].setString("3. Torneios");
        menuOptions[3].setString("4. Sair");

        // Ajusta a posição das opções no menu
        for (int i = 0; i < 4; ++i) {
            menuOptions[i].setFont(font);
            menuOptions[i].setCharacterSize(24);
            menuOptions[i].setFillColor(sf::Color::White);
            menuOptions[i].setPosition(300, 150 + i * 50);  // Organiza as opções no centro
        }
    }

    // Exibe o menu e processa a interação com o jogador
    void show() {
        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();  // Fecha a janela se o usuário clicar no "X"
                }

                // Verifica se o jogador pressionou uma tecla numérica
                if (event.type == sf::Event::KeyPressed) {
                    if (event.key.code == sf::Keyboard::Num1) {
                        createEntity();
                    }
                    else if (event.key.code == sf::Keyboard::Num2) {
                        trainEntity();
                    }
                    else if (event.key.code == sf::Keyboard::Num3) {
                        tournament();
                    }
                    else if (event.key.code == sf::Keyboard::Num4) {
                        window.close();  // Fecha a janela se a opção "Sair" for escolhida
                    }
                }
            }

            // Limpa a janela e desenha as opções do menu
            window.clear();
            for (int i = 0; i < 4; ++i) {
                window.draw(menuOptions[i]);
            }
            window.display();
        }
    }

private:
    // Funções chamadas quando o jogador escolhe uma opção do menu
    void createEntity() {
        std::cout << "Criando uma nova entidade..." << std::endl;
        // Implementação futura para criar uma nova entidade
    }

    void trainEntity() {
        std::cout << "Treinando a entidade..." << std::endl;
        // Implementação futura para treinar a entidade
    }

    void tournament() {
        std::cout << "Iniciando um torneio..." << std::endl;
        // Implementação futura para iniciar um torneio
    }

    sf::RenderWindow window;  // A janela do jogo
    sf::Font font;            // Fonte usada para as opções do menu
    sf::Text menuOptions[4];  // Opções do menu
};

int main() {
    // Cria e exibe o menu
    Menu menu;
    menu.show();
    return 0;
}

