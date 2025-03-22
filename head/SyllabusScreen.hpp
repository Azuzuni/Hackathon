#pragma once
#include "Screen.hpp"
#include <iostream>

namespace hackathon
{
    class SyllabusScreen : public Screen
    {
    public:
        SyllabusScreen(raylib::Window& window) :
            Screen(window),
            m_background(LoadTexture("../graphic/Tlo.jpg")) {};

        void compute() override {};

        void display() override {
            // Tlo
            DrawTexture(m_background, 0, 0, WHITE);

            // lewa kolumna
            const char* leftColumnText =
                "Granica funkcji w punkcie: lim(x->a) f(x) = L\n"
                "Granica jednostronna (lewa): lim(x->a-) f(x) = L\n"
                "Granica jednostronna (prawa): lim(x->a+) f(x) = L\n"
                "Granica funkcji przy x -> nieskonczonosc: lim(x->inf) 1/x^n = 0\n"
                "Granica wyk³adnicza: lim(x->inf) e^(-x) = 0\n"
                "Regula de L’Hopitala: lim(x->a) f(x)/g(x) = lim(x->a) f'(x)/g'(x)\n"
                "Wypuklosc: f(lambda*x1 + (1 - lambda)*x2) <= lambda*f(x1) + (1 - lambda)*f(x2)\n"
                "Wkleslosc: f(lambda*x1 + (1 - lambda)*x2) >= lambda*f(x1) + (1 - lambda)*f(x2)\n"
                "Wypuklosc - pochodna: f''(x) >= 0\n"
                "Wkleslosc - pochodna: f''(x) <= 0\n"
                "Pochodna funkcji: f'(x) = lim(Delta x->0) [f(x+Delta x) - f(x)] / Delta x\n"
                "Pochodna potegi: d/dx x^n = n * x^(n-1)\n"
                "Pochodna wyk³adnicza: d/dx e^x = e^x\n"
                "Pochodna logarytmiczna: d/dx ln(x) = 1/x\n"
                "Regula lancuchowa: d/dx f(g(x)) = f'(g(x)) * g'(x)\n"
                "Regula iloczynu: d/dx [f(x) * g(x)] = f'(x) * g(x) + f(x) * g'(x)\n"
                "Regula ilorazu: d/dx (f(x)/g(x)) = [f'(x) * g(x) - f(x) * g'(x)] / [g(x)]^2\n"
                "Rowanie liniowe: ax + b = 0\n"
                "Rowanie kwadratowe: ax^2 + bx + c = 0\n"
                "Rozwiazanie rownania kwadratowego: x = (-b ± sqrt(b^2 - 4ac)) / 2a";


                //prawa kolumna
                const char* rightColumnText =
                    "Potega zerowa: x^0 = 1\n"
                    "Potega ujemna: x^(-n) = 1/x^n\n"
                    "Potega pol: x^(1/2) = sqrt(x)\n"
                    "Potega wymierna: x^(m/n) = sqrt[n]{x^m}\n"
                    "Potega z iloczynem: (x * y)^n = x^n * y^n\n"
                    "Negacja: not P\n"
                    "Koniunkcja (i): P and Q\n"
                    "Alternatywa (lub): P or Q\n"
                    "Implikacja: P -> Q\n"
                    "Rownowaznosc: P <-> Q\n"
                    "Prawo de Morgana: not(P and Q) = not P or not Q\n"
                    "Zasada sprzecznosci: P and not P = falsz\n"
                    "Prawo lacznosci dla koniunkcji: (P and Q) and R = P and (Q and R)\n"
                    "Prawo rozdzielnosci dla koniunkcji: P and (Q or R) = (P and Q) or (P and R)\n"
                    "Zasada podwojnej negacji: not(not P) = P\n"
                    "Definicja silni: n! = n * (n-1) * (n-2) * ... * 1\n"
                    "Silnia dla 0: 0! = 1\n"
                    "Rekurencyjna definicja silni: n! = n * (n-1)!\n"
                    "Granica ciagu geometrycznego: lim(n->inf) a * r^n = 0 (dla |r| < 1)\n"
                    "Granica logarytmu: lim(x->inf) ln(x) = inf";
                

            
            int columnWidth = GetScreenWidth() / 2;

            
            int lineHeight = 30;

            
            for (int i = 0; i < 20; ++i) {
                DrawText(TextFormat("%s", leftColumnText), 10, 10 + i * lineHeight, 20, BLACK);
            }

            for (int i = 0; i < 20; ++i) {
                DrawText(TextFormat("%s", rightColumnText), columnWidth + 10, 10 + i * lineHeight, 20, BLACK);
            }
        };

    private:
        Texture2D m_background;
    };
}