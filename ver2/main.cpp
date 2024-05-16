#include <bits/stdc++.h>
using namespace std;

void solve(int element, float amount, char unit) {

 vector<float> mass = {1.008 , 4.0026 , 6.94 , 9.0122 , 10.81 , 12.011 , 14.007 , 15.999 , 18.998 , 20.180 , 22.990 , 24.305 , 26.982 , 28.085 , 30.974 , 32.07 , 35.45 , 39.948 , 39.098 , 40.078 , 44.956 , 47.867 , 50.942 , 51.996 , 54.938 , 55.845 , 58.933 , 58.693 , 63.546 , 65.38 , 69.723 , 72.63 , 74.922 , 78.971 , 79.904 , 83.798 , 85.468 , 87.62 , 88.906 , 91.224 , 92.906 , 95.95 , 98 , 101.07 , 102.91 , 106.42 , 107.87 , 112.41 , 114.82 , 118.71 , 121.76 , 127.60 , 126.90 , 131.29 , 132.91 , 137.33 , 138.91 , 140.12 , 140.91 , 144.24 , 145 , 150.36 , 151.96 , 157.25 , 158.93 , 162.50 , 164.93 , 167.26 , 168.93 , 173.05 , 174.97 , 178.49 , 180.95 , 183.84 , 186.21 , 190.23 , 192.22 , 195.08 , 196.97 , 200.59 , 204.38 , 207.2 , 208.98 , 209 , 210 , 222 , 223 , 226.03 , 227 , 232.04 , 231.04 , 238.03 , 237 , 244 , 243 , 247 , 247 , 251 , 252 , 257 , 258 , 259 , 270 , 271 , 270 , 276 , 281 , 282 , 285 , 286 , 290 , 289 , 293 , 294 , 294};
 vector<string> elements = {"Hydrogen", "Helium", "Lithium", "Beryllium", "Boron", "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon", "Sodium", "Magnesium", "Aluminum", "Silicon", "Phosphorus", "Sulfur", "Chlorine", "Argon", "Potassium", "Calcium", "Scandium", "Titanium", "Vanadium", "Chromium", "Manganese", "Iron", "Cobalt", "Nickel", "Copper", "Zinc", "Gallium", "Germanium", "Arsenic", "Selenium", "Bromine", "Krypton", "Rubidium", "Strontium", "Yttrium", "Zirconium", "Niobium", "Molybdenum", "Technetium", "Ruthenium", "Rhodium", "Palladium", "Silver", "Cadmium", "Indium", "Tin", "Antimony", "Tellurium", "Iodine", "Xenon", "Cesium", "Barium", "Lanthanum", "Cerium", "Praseodymium", "Neodymium", "Promethium", "Samarium", "Europium", "Gadolinium", "Terbium", "Dysprosium", "Holmium", "Erbium", "Thulium", "Ytterbium", "Lutetium", "Hafnium", "Tantalum", "Tungsten", "Rhenium", "Osmium", "Iridium", "Platinum", "Gold", "Mercury", "Thallium", "Lead", "Bismuth", "Polonium", "Astatine", "Radon", "Francium", "Radium", "Actinium", "Thorium", "Protactinium", "Uranium", "Neptunium", "Plutonium", "Americium", "Curium", "Berkelium", "Californium", "Einsteinium", "Fermium", "Mendelevium", "Nobelium", "Lawrencium", "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium", "Hassium", "Meitnerium", "Darmstadtium", "Roentgenium", "Copernicium", "Nihonium", "Flerovium", "Moscovium", "Livermorium", "Tennessine", "Oganesson"};


    if (unit == 'g') {
        cout <<  amount << " grams of " << elements[element-1] << " is equivalent to " << amount / mass[element-1] << " moles.";    // g->mol      
    } else if (unit == 'm') {
        cout << amount << " moles of " << elements[element-1] << " is equivalent to " << amount * mass[element-1] << " grams.";    // mol->g       
    } else {
        cout << "invalid element. check input value.";
    }

}

int main() {
    int element; int amount; char unit;
    cin >> element >> amount >> unit;

    solve(element, amount, unit);
}