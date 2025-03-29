// John Ivan L. Mostoles 12-CPE-01
// If-Else Dictionary in C++

#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string name;
        cout << "Search a Word (or type 'exit' to quit): ";
        getline(cin, name);

        if (name == "exit") {
            break;
        } else if (name == "Accismus") {
            cout << "Pretending to be disinterested in something you actually want." << endl;
        } else if (name == "Apricate") {
            cout << "To bask in the sunshine." << endl;
        } else if (name == "Bafflegab") {
            cout << "Confusing or unintelligible jargon." << endl;
        } else if (name == "Bailiwick") {
            cout << "A person's area of expertise or authority." << endl;
        } else if (name == "Cacophony") {
            cout << "A harsh, discordant mixture of sounds." << endl;
        } else if (name == "Clandestine") {
            cout << "Kept secret or done secretively." << endl;
        } else if (name == "Convivial") {
            cout << "Friendly and enjoyable." << endl;
        } else if (name == "Credulity") {
            cout << "A tendency to believe things too readily." << endl;
        } else if (name == "Effervescent") {
            cout << "Bubbly, lively, or enthusiastic." << endl;
        } else if (name == "Ephemeral") {
            cout << "Lasting for a very short time." << endl;
        } else if (name == "Erudite") {
            cout << "Having or showing great knowledge or learning." << endl;
        } else if (name == "Fatuous") {
            cout << "Silly and pointless." << endl;
        } else if (name == "Flibbertigibbet") {
            cout << "A frivolous or flighty person." << endl;
        } else if (name == "Garrulous") {
            cout << "Excessively talkative, especially on trivial matters." << endl;
        } else if (name == "Ineluctable") {
            cout << "Unable to be resisted or avoided." << endl;
        } else if (name == "Insouciant") {
            cout << "Showing a lack of concern." << endl;
        } else if (name == "Lachrymose") {
            cout << "Tearful or given to weeping." << endl;
        } else if (name == "Loquacious") {
            cout << "Tending to talk a great deal; talkative." << endl;
        } else if (name == "Mellifluous") {
            cout << "(of a voice or words) sweet or musical; pleasant to hear." << endl;
        } else if (name == "Obsequious") {
            cout << "Excessively attentive or flattering." << endl;
        } else if (name == "Pauciloquent") {
            cout << "Using few words; terse or concise." << endl;
        } else if (name == "Perspicacious") {
            cout << "Having a ready grasp of things; shrewd or discerning." << endl;
        } else if (name == "Pneumonoultramicroscopicsilicovolcanoconiosis") {
            cout << "A lung disease caused by inhaling very fine silica dust." << endl;
        } else if (name == "Pulchritudinous") {
            cout << "Having great physical beauty." << endl;
        } else if (name == "Quixotic") {
            cout << "Exceedingly idealistic; unrealistic and impractical." << endl;
        } else if (name == "Raconteur") {
            cout << "A person who tells anecdotes in a skillful and amusing way." << endl;
        } else if (name == "Sycophant") {
            cout << "A person who tries to win favor from wealthy or influential people by flattering them." << endl;
        } else if (name == "Tittynope") {
            cout << "A small quantity of anything left over." << endl;
        } else if (name == "Uxorious") {
            cout << "Having or showing an excessive or submissive fondness for one's wife." << endl;
        } else if (name == "Verbiage") {
            cout << "Speech or writing that uses too many words or excessively technical expressions." << endl;
        } else {
            cout << "Word is not on the List!" << endl;
        }
    }

    return 0;
}
