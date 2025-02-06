#include <iostream>
#include <windows.h> //Library needed for Sleep method
#include <mmsystem.h> //Library for accessing windows multimedia metho99999d
#pragma comment(lib, "winmm.lib"); //USE PRAGMA TO ACCESS THE WINDOWS MEDIA LIBRARIES FOR PLAYSOUND
#include <conio.h>//Library enables the _getch() method to change the press any key pause prompt

using namespace std;
///Function Prototypes
void setupWindowSize();
void fontsize18();
void fontsize20();
void fontsize40();
void flashcursor(string &output);
void cursoroff();

void setupWindowSize(){
     //Maximize the terminal window requires the windows.h library
        keybd_event(VK_MENU,0x38,0,0);
        keybd_event(VK_RETURN,0x1c,0,0);
        keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
   
        keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void fontsize18(){

     //Change The Font Type and Size In the Console 
        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 0;                   // Width of each character in the font
        cfi.dwFontSize.Y = 18;                  // Height
        cfi.FontFamily = FF_DONTCARE;
        cfi.FontWeight = FW_BOLD;
        std::wcscpy(cfi.FaceName, L"ComicSans"); // Choose your font
        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi); 
}


void fontsize20(){

     //Change The Font Type and Size In the Console 
        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 0;                   // Width of each character in the font
        cfi.dwFontSize.Y = 20;                  // Height
        cfi.FontFamily = FF_DONTCARE;
        cfi.FontWeight = FW_BOLD;
        std::wcscpy(cfi.FaceName, L"ComicSans"); // Choose your font
        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi); 
}

void fontsize40(){

     //Change The Font Type and Size In the Console 
        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 0;                   // Width of each character in the font
        cfi.dwFontSize.Y = 40;                  // Height
        cfi.FontFamily = FF_DONTCARE;
        cfi.FontWeight = FW_BOLD;
        std::wcscpy(cfi.FaceName, L"ComicSans"); // Choose your font
        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi); 
}
void flashcursor(string &output){
    unsigned char block = 254;
    
    for(size_t i=0; i<output.size(); i++){
            cout << output[i];
            cout << block;
            Sleep(10);
            cout << "\b";
            cout << " ";
            Sleep(10);
            cout << "\b";
           
        }
    }

void cursoroff(){
    HANDLE hStdOut = NULL;
    CONSOLE_CURSOR_INFO curInfo;
    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(hStdOut, &curInfo);
    curInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hStdOut, &curInfo);
}

int main() {
    
    setupWindowSize();
    
    fontsize20();   
    
    cursoroff();
     //Play sound for the start of the program
    PlaySound(TEXT("C://Users//jonat//Workspaces//Resume2025//Resume2025//digitalcv.wav"),NULL, SND_FILENAME| SND_ASYNC);
    
    system("COLOR 2");
    
    string output="\t\t\t\t\t\tJONATHAN JOSEPH";
    
    string output2="\t\t\t\tENTERPRISE ARCHITECT - DYNAMIC TECHNOLOGY LEADER";
    
    string output3="\t07523 674 163| CHESHIRE | jjosephuk@outlook.com | https://www.linkedin.com/in/jonathanedwardjoseph";
    
    string output4= "        PROFILE";
    
    string output5="                                               TECHNICAL SKILLS & EXPERTISE";
    
    string output6= "     ENTERPRISE ARCHITECTURE & FRAMEWORKS         CLOUD & INFRASTRUCTURE        ENTERPRISE PLATFORMS & INTEGRATION";
    
    string output7="     SECURITY & COMPLIANCE                        CODING & AUTOMATION           CERTIFICATIONS";
    
    string output8="                                                    EMPLOYMENT HISTORY";      
    
    string flashdots=".............";
    
    cout << "\n\n";
    
    flashcursor(output);
    
    cout << "\n\n";
    
    flashcursor(output2);
    
    cout << "\n\n";
    
    flashcursor(output3);
    
    cout <<"\n\n\n\n";
    
    flashcursor(output4);
    
    cout << "\n";
    
    cout << "        -------" << "\n";
    
    cout << R"(             
        TOGAF-certified Enterprise Architect with a proven track record in designing scalable, 
        secure, and futureproof enterprise solutions. Adept at aligning business objectives with 
        technology strategies, ensuring compliance with Cyber Security standards and data governance 
        standards such as GDPR. Experienced in leading architectural governance, collaborating with 
        stakeholders, and driving digital transformation across cloud, SaaS, and AI-driven solutions
        in various global geographical territories. Maximising and balancing the impact of 
        architecture designs and solutions within budgetary requirements.)"; 
    
    Sleep(2000);
    
    cout << "\n\n\n\n";
    
    cout << "        PLEASE PRESS ANY KEY TO REVIEW MY TECHNICAL SKILLS & EXPERTISE";
   
    cout << "\n";
   
    cout << "        ";
    
    flashcursor(flashdots);
    
    _getch(); //Wait for the user to press a key before executing the next instruction
    
    system("CLS");
    

    cout << "\n";

    cout << output5 << "\n";

    cout <<"                                               --------- ------ - ---------";

    cout << "\n\n";
    
    flashcursor(output6);

    cout << "\n";

    cout << "     ---------- ------------ - ----------         ----- - --------------        ---------- --------- - -----------" << "\n";
    
	cout << R"(     TOGAF 10                                     AWS                           Microsoft Dynamics 365
     Digital Transformation                       Google Cloud                  CRMs and ERPs 
     Business Process Modelling                   Microsoft E5                  SalesForce 
     Architecture Governance & Compliance         ServiceNow                    Content Management Solutions 
     IT Strategy & Roadmap                        Virtualization                API & Web Services
     Cloud & Infrastructure Modernisation         Enterprise Integration        AI & Machine Learning 
     SOA, Microservices, REST APIs
     Stakeholder Management
     Governance & Compliance)";
     
    cout << "\n\n\n\n";
     
    Sleep(1000);

    flashcursor(output7);

    cout << "\n";

    cout << "     -------- - ----------                        ------ - ----------           --------------" << "\n";

    cout << R"(     ISO27001                                     Python                        TOGAF 10 Certified Practitioner
     UK Cyber Essentials                          PHP                           TOFAF 10 Applied Practitioner
     SOC2                                         JavaScript                    JavaScript Full Stack Web Developer
     GDPR                                         JSON                          GDPR Awareness 
     Enterprise Risk Management                   Modern C++                    Negotiation Through Tactical Empathy
                                                  VBA                           Conflict Management  
                                                  SQL                           Mental Health First Aider
                                                  GitHub
                                                  JIRA
                                                  Agile & DevOps Practices
  )";
    
    Sleep(2000);
    
    cout << "\n";
    
    cout << "   PLEASE PRESS ANY KEY TO REVIEW MY EMPLOYMENT HISTORY";
   
    cout << "\n";
   
    cout << "   ";
    
    flashcursor(flashdots);
    
    _getch(); //Wait for thre user to press a key before executing the next instruction
    
    system("CLS");
    fontsize18();
    cout << "\n";
    cout << output8 <<"\n";
    cout << "                                                    ---------- -------" << "\n\n";
    
    cout << R"(    Ingeus UK                Senior Solutions Lead\Enterprise Architect                    March 23 - Present
    ---------                ------ --------- --------------- ---------                    ----- -- - -------
    - Leading the adoption and refinement of the TOGAF framework, embedding architectural best practices 
      across the enterprise.
    - Developing high-level enterprise architecture designs to support business transformation initiatives 
      and contractual obligations.
    - Conducting business capability modelling and process optimisation to identify inefficiencies and 
      opportunities for digital transformation.
    - Advising C-level executives and stakeholders on technology roadmaps, cloud adoption strategies, and 
      enterprise integrations.
    - Ensuring compliance with ISO27001, UK Cyber Essentials, GDPR, and SOC2 while maintaining architectural 
      governance.
    - Organising, leading and participating within Agile project meetings with the Architecture Team, DevOps 
      and business Stakeholders.)";
  
  cout << "\n\n";
  
  cout << R"(    Avnio                   Senior Solutions Engineer\Enterprise Architect                 March 22 - March 23
    -----                   ------ --------- ------------------- ---------                 ----- -- - --------
    - Provided enterprise architecture consultancy, acting as a trusted advisor to prospects and internal teams.
    - Led business process analysis, identifying operational gaps and inefficiencies in enterprise workflows.
    - Demonstrated the ROI and business value of Avnio`s automation solutions to key stakeholders.
    - Documented and articulated solution architecture requirements and solutions with the DevOps team.
    - Organised and led daily Agile project stand up meetings with the DevOps Team.)";
    
    cout << "\n\n";
  
    cout << R"(    Northcoders Manchester                     Web Developer Bootcamp                      August 21 - December 21
    ----------- ----------                     --- --------- --------                      ------ -- - -----------
    - Working with a DevOps Team to develop Enterprise Architecture engagement when working on Backend
      and Frontend Web development projects.
    - Providing leadership to project manage teams using Agile methodology.)";
    
     Sleep(2000);
    
    cout << "\n\n";
    
    
    cout << "   PLEASE PRESS ANY KEY TO REVIEW MORE EMPLOYMENT HISTORY";
   
    cout << "\n";
    cout << "   ";
    
    
    flashcursor(flashdots);
    
    _getch(); //Wait for thre user to press a key before executing the next instruction
    
    system("CLS");
    cout << "\n";
    cout << "    " << output8 <<"\n";
    cout << "                                                        ---------- -------";
    cout << "\n\n";
  
    cout << R"(    Nationwide Franking Sense Ltd                National Print Solutions Manager            March 20 - August 21
    ---------- -------- ----- ---                -------- ----- --------- -------            ----- -- - ------ --
    - Led enterprise-wide digital transformation and process automation initiatives.
    - Aligned IT solutions with business strategy, driving cost optimisation and operational efficiency.
    - Provided architect documentation.)";
 
    cout << "\n\n";
  
    cout << R"(    Zerographic Systems                     Head Of Professional Services & Architecture     January 19 - September 19
    ----------- -------                     ---- -- ------------ -------- - ------------     ------- -- - --------- --
    - Managed a team of consultants delivering enterprise SaaS and digital transformation solutions.
    - Defined and implemented new enterprise architecture delivery processes.
    - Created a new Architectural Repository, artifacts and documentation templates.
    - Managed and onboarded new software solution vendors.)";
    
    cout << "\n\n";
  
    cout << R"(    Xerox UK Ltd                                        Pre-Sales Analyst                    June 16 - December 18
    ----- -- ---                                        --------- -------                    ---- -- - -------- --
    - Provided architectural and solution design documentation.
    - Ensured continual data governance and helped customers be continual aware of data compliance and data retention
      policies.
    - Providing technical software support to the Graphic Communications Sales Team and Xerox Commercial print 
      prospects and customers.
    - Awarded Xerox Reward & Recognition by Xerox`s Managing Director for Customer Service & Support.)";
    
    cout << "\n\n";
  
    cout << R"(    Brother UK Ltd                                    Senior Client Manager                  December 15 - April 16
    ------- -- ---                                    ------ ------ -------                  -------- -- - ----- - -
    - Working with new and existing partners, to enhance their business offerings through various software solutions,
    products and services.)";
    
    cout << "\n\n";
  
    cout << R"(    Zen Office                            Head Of Professional Services & Architecture       August 14 - December 15
    --- ------                            ---- -- ------------ -------- - ------------       ------ -- - -------- -- 
    - Responsible for designing and implementing the Architectural Design of the Professional Services department 
      including Back Office, Sales Order Processing, Sales, Pre Sales and Post Sales solution delivery.
    - Training the technical team on Digital Transformation, Enterprise Architecture principles and technical 
      documentation and design.)";
    Sleep(1000000);
    return 0;
}
