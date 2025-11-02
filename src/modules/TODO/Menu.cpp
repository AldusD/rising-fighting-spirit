// commented until i see how to implement it TODO ROQUE: REMOVER OU TRATAR ESSE ARQUIVO

// #include <SFML/Graphics.hpp>
// #include <SFML/Window.hpp>
// #include <SFML/System.hpp>
// #include <iostream>

// // Classe Menu que gerencia a interface gr�fica do menu
// class Menu {
// public:
//     // Construtor: inicializa a janela e o menu
//     Menu() {
//         window.create(sf::VideoMode(800, 600), "Menu de Jogo");  // Cria a janela
//         if (!font.loadFromFile("arial.ttf")) {  // Carrega a fonte
//             std::cerr << "Erro ao carregar a fonte!" << std::endl;
//         }

//         // Inicializa as op��es de menu
//         menuOptions[0].setString("1. Criar Entidade");
//         menuOptions[1].setString("2. Treinamento");
//         menuOptions[2].setString("3. Torneios");
//         menuOptions[3].setString("4. Sair");

//         // Ajusta a posi��o das op��es no menu
//         for (int i = 0; i < 4; ++i) {
//             menuOptions[i].setFont(font);
//             menuOptions[i].setCharacterSize(24);
//             menuOptions[i].setFillColor(sf::Color::White);
//             menuOptions[i].setPosition(300, 150 + i * 50);  // Organiza as op��es no centro
//         }
//     }

//     // Exibe o menu e processa a intera��o com o jogador
//     void show() {
//         while (window.isOpen()) {
//             sf::Event event;
//             while (window.pollEvent(event)) {
//                 if (event.type == sf::Event::Closed) {
//                     window.close();  // Fecha a janela se o usu�rio clicar no "X"
//                 }

//                 // Verifica se o jogador pressionou uma tecla num�rica
//                 if (event.type == sf::Event::KeyPressed) {
//                     if (event.key.code == sf::Keyboard::Num1) {
//                         createEntity();
//                     }
//                     else if (event.key.code == sf::Keyboard::Num2) {
//                         trainEntity();
//                     }
//                     else if (event.key.code == sf::Keyboard::Num3) {
//                         tournament();
//                     }
//                     else if (event.key.code == sf::Keyboard::Num4) {
//                         window.close();  // Fecha a janela se a op��o "Sair" for escolhida
//                     }
//                 }
//             }

//             // Limpa a janela e desenha as op��es do menu
//             window.clear();
//             for (int i = 0; i < 4; ++i) {
//                 window.draw(menuOptions[i]);
//             }
//             window.display();
//         }
//     }

// private:
//     // Fun��es chamadas quando o jogador escolhe uma op��o do menu
//     void createEntity() {
//         std::cout << "Criando uma nova entidade..." << std::endl;
//         // Implementa��o futura para criar uma nova entidade
//     }

//     void trainEntity() {
//         std::cout << "Treinando a entidade..." << std::endl;
//         // Implementa��o futura para treinar a entidade
//     }

//     void tournament() {
//         std::cout << "Iniciando um torneio..." << std::endl;
//         // Implementa��o futura para iniciar um torneio
//     }

//     sf::RenderWindow window;  // A janela do jogo
//     sf::Font font;            // Fonte usada para as op��es do menu
//     sf::Text menuOptions[4];  // Op��es do menu
// };

// int main() {
//     // Cria e exibe o menu
//     Menu menu;
//     menu.show();
//     return 0;
// }

