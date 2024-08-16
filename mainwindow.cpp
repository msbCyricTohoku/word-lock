#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>
#include <stdio.h>
#include <time.h>       /* time */
#include <ctype.h>
#include <ctime>
#include <stdio.h>


    using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->plainTextEdit->setPlainText("Type-ur-message-here--no-space!--");

    ui->textEdit->setPlainText("1");
    ui->textEdit_2->setPlainText("3");
    ui->textEdit_3->setPlainText("h");
    ui->textEdit_4->setPlainText("~");
    ui->textEdit_5->setPlainText("10");
        ui->textEdit_6->setPlainText("user@144.214.24.37");

    //ui->textBrowser->setTextColor(Qt::black);
    //ui->label->setTextColor(Qt::black));

        ui->label->setStyleSheet("QLabel {color : green;}");
          ui->label_2->setStyleSheet("QLabel {color : blue;}");
            ui->label_3->setStyleSheet("QLabel {color : pink;}");
              ui->label_4->setStyleSheet("QLabel {color : pink;}");
                ui->label_5->setStyleSheet("QLabel {color : pink;}");
                   ui->label_6->setStyleSheet("QLabel {color : pink;}");
                     ui->label_7->setStyleSheet("QLabel {color : pink;}");
                     ui->label_8->setStyleSheet("QLabel {color : yellow;}");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    char inject[85]={'q','w','e','r','t','y','u','i','o',
       'p','a','s','d','f','g','h','j','k',
        'l','z','x','c','v','b','n','m','1','2','3',
        '4','5','6','7','8','9','0',
        '?','@','#','*',
        '[',']','<','>','/','!',
        '$','%','^','&','(',')','_','+','=','-','`','~','|',
        'Q','W','E','R','T','Y','U','I','O','P','A','S',
        'D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};

    int injval = 85;


       // int c;
      //  cout << "(1)--> cipher, (2)--> decipher" << endl;
       // cin >> c;

       // c=1;

        QString text = ui->plainTextEdit->toPlainText();

          ui->textBrowser->insertPlainText(text);

        //  ofstream outdataxf;
        //  outdataxf.open("inp.dat");

        //  outdataxf << text;

          const QString qPath("inp.dat");

          QFile qFile(qPath);

            if (qFile.open(QIODevice::WriteOnly)) {
              QTextStream out(&qFile); out << text;
              qFile.close();
            }




            QString char1 = ui->textEdit->toPlainText();
            QString char2 = ui->textEdit_2->toPlainText();
            QString char3 = ui->textEdit_3->toPlainText();
            QString char4 = ui->textEdit_4->toPlainText();
            QString char5 = ui->textEdit_5->toPlainText();
            QString lin;


            const QString xPath("tmpkey.dat");

            QFile xFile(xPath);

              if (xFile.open(QIODevice::WriteOnly)) {
                QTextStream out(&xFile); out << char1;
                out << "\n";
                //  lin = out.readLine();
               // out << endl;
                QTextStream out2(&xFile); out << char2;
                out << "\n";
                QTextStream out3(&xFile); out << char3;
                out << "\n";
                QTextStream out4(&xFile); out << char4;
               // xFile.close();
                out << "\n";
                QTextStream out5(&xFile); out << char5;
                xFile.close();
              }


        //  outdataxf.close();



        int size =0;
        ifstream indata;
        ifstream indata2;
        char ind;
        indata.open("inp.dat");
       // bool found;

        int cklog; // = 3;
        int cklog2;
        char ckchar1; // = 'k';
        char ckchar2;
                int merge;

        ifstream indataqq;
        indataqq.open("tmpkey.dat");

        while(!indataqq.eof()){

            indataqq >> cklog;
            indataqq >> cklog2;
            indataqq >> ckchar1;
            indataqq >> ckchar2;
            indataqq >> merge;

        }
        indataqq.close();


        //cout << "input 2 cklog: (0-10 per entry):" << endl;
        //cin >> cklog;
       // cin >> cklog2;





        // cout << "input 2 ckchar: (single keyboard character per entry):" << endl;
       // cin >> ckchar1;
        //cin >> ckchar2;

                 //ckchar1=char1;
                 //ckchar2=char2;


        // cout << ckchar1 << " " << ckchar2 << endl;;

        if(!indata){
            exit(1);
        }


       // indata >> ind;  //EOF flag

        while(!indata.eof()){
           // cout << word << endl;
            indata >> ind;  //EOF flag
           // cout << ind << endl;
            size++;
        }
        indata.close();

        size = size -1;

       // cout << size << endl;

        indata2.open("inp.dat");



        char word[size];
    //    char wordlock[size];
        char wordlocktmp[size];
        char wordback[size];
                    int injnum[size];
                    char injchar[size];

    //    while(!indata2.eof()){

        for(int i=0; i < size; i++)
        {

            indata2 >> word[i];
            cout << word[i];
        }
        indata2.close();

       /*
        for(int i=size; i >= 0; i--)
        {
            cout << word[i] << endl;
        }
        */

        int randArray[size];
        int randArray2[size];
        ofstream outdata;
        outdata.open("key.dat");
        ofstream outdata2;
        outdata2.open("wordlock.dat");
        //ofstream outdata3;
       // outdata3.open("reveal.dat");
        int tmpnum;
        int tmpnum2;

     //   int tmpnum3;
      //  indata2.open("wordlock.dat");

        srand(time(0));



    //    if(size > 500){
   //     merge = 50; //size/5;
   //     }else{
   //     merge = 20;
   //     }


        // char ckchar2 = 'g';

             outdata << size;
         outdata << endl;
         outdata << merge;
         outdata << endl;
                 outdata << cklog << " ";
                 outdata << cklog2;
         outdata << endl;
                 outdata << ckchar1 << " ";
                 outdata << ckchar2;
         outdata << endl;
        // 	     outdata << ckchar2;
         //outdata << endl;



        //cout << merge << endl;
        //lossy to lossless loop*****
        for(int k=0; k < merge; k++)
        {
            //keylogcomplex();


        for(int i=0;i<size;i++)
        {
           //
           //float sizex = size;
            tmpnum =rand()%(size);  //rand()%(int)round((exp(sizex)));
            randArray[i] = tmpnum;
            tmpnum2 =rand()%(size); //rand()%(int)round((exp(sizex)));
            randArray2[i] = tmpnum2;

            if(i>0)
            {

            if(tmpnum==randArray[i-1])
            {
               // srand(time(0));
                tmpnum =rand()%(size); //rand()%(int)round((exp(sizex)));
                randArray[i] = tmpnum;
               // cout << "q" << endl;
            }

                if(tmpnum2==randArray2[i-1])
                {
                   // srand(time(0));
                    tmpnum2 =rand()%(size);  //rand()%(int)round((exp(sizex)));
                    randArray2[i] = tmpnum2;
                   // cout << "q" << endl;
                }

            }
            //randArray[i]=rand()%(size+1);

        }


        for(int i=0;i<size;i++)
        {
            if(randArray[i]==randArray2[i]){
            } else {
                randArray[i] = randArray2[i];
            }
        }

      /*

      //  found = true;
        for(int i=0;i<size;i++)
        {
            tmpnum = randArray[i];



            for(int j=0;j<size;j++)
            {
              //  cout << randArray[i] << " " << randArray[j] << endl;

            }
        }

        */
          //  cout << endl;

            int q=10;
            int injectpos[size];

            for(int i=0; i < size; i++)
            {
                injectpos[i] = rand()%q;
            }



            //srand(time(0));
            //cout << rand()%q;

        //*****
        //*****
        for(int i=0;i<size;i++)
        {


         //   cout << injnum[i] << " ";

            if(injectpos[i]<5){

            outdata2 << word[randArray[i]];
            }
            if(injectpos[i]>=5){
                injnum[i] =rand()%(injval);
                //injector(injnum,injcahr);

                injchar[i] = inject[injnum[i]];

            outdata2 << injchar[i];
            }
            //outdata << word[randArray[i]];
            wordlocktmp[i] = word[randArray[i]];
        }

      // outdata2 << endl;

     //  cout << endl;


        for(int i=0;i<size;i++)
        {
            //outdata << injectpos[i] << " ";
            //cout << randArray[i] << " ";
           // if(injectpos[i] < 5){




                if(randArray[i] == cklog){
            outdata << (int)ckchar1+size + 2*size << " ";
               } else if(randArray[i] == cklog2){
                outdata << (int)ckchar2+size+2*size << " ";
               }
               else{
                   outdata << randArray[i] + size << " ";
               }



          //  }
           // if(injectpos[i] >= 5){
               if(injectpos[i] == cklog){
                    outdata << (int)ckchar1+size+ 2*size << " ";
                } else if(injectpos[i] == cklog2){
                    outdata << (int)ckchar2+size+ 2*size << " ";
                }
                else{
            outdata << injectpos[i] + size << " ";
                }

                //else if(injectpos[i] > cklog){
                    //outdata << ckchar2 << " ";
            //	}

          //  }
           // outdata << injnum[i] << " ";
        }

       outdata << endl;



        for(int i=0;i<size;i++)
        {
           // cout << randArray[i] << endl;
            wordback[randArray[i]] = wordlocktmp[i];
        }

        cout << endl;

        for(int i=0;i<size;i++)
        {
            ui->textBrowser->setTextBackgroundColor(Qt::red);
            ui->textBrowser->setTextColor(Qt::black);
             const QChar qw2 = word[randArray[i]];
                       ui->textBrowser->insertPlainText(qw2);

             cout << word[randArray[i]] << " ";



               //ui->textBrowser->setPlainText(qw);

            //Sleep(1000);
          //   delay(dl);
         //   outdata3 << wordback[i];
        }
        //cout << endl;
      //      outdata3 << endl;
      //  }

        }

        outdata.close();
        outdata2.close();
        //outdata3.close();

        //ofstream outdatax;
        //outdatax.open("size.dat");
        //outdatax << size;
        //outdatax.close();

   //     for(int i=0; i < size; i++){

           // odata5 << wordrev[i];



        //qw.push_back(wordrev[i]);
     //    ui->textBrowser->setTextBackgroundColor(Qt::green);
      //   ui->textBrowser->setTextColor(Qt::black);

            //ui->textBrowser->setPlainText(qw);
           // ui->textBrowser->insertPlainText(qw2);


              // cout << wordrev[i];

           //cout << endl;
     //   }




        /*
    def ent(self):
        mytext = self.textEdit.toPlainText()
                with open('somefile.txt', 'a') as f:
                    f.write(mytext)
*/

     //   ui->plainTextEdit->setPlainText("      message has been locked!");
     //   ui->textBrowser->setPlainText("now at cipher");

     // ui->textBrowser->setTextBackgroundColor(Qt::green);

  //      ui->plainTextEdit->setPlainText("      message has been locked!");





}


void MainWindow::on_pushButton_2_clicked()
{



    //reading the keys boys
    /*
    char indq;
    char dummy1;
    char dummy2;
    char dummy3;
    int fullchar = 0;
    ifstream indataq;
     indataq.open("key.dat");
    indataq >> dummy1;
    cout << dummy1 << endl;
    indataq >> dummy2;
    cout << dummy2 << endl;
    indataq >> dummy3;
            while(!indataq.eof()){
       // cout << word << endl;
        indataq >> indq;  //EOF flag
       // cout << ind << endl;
        fullchar++;
    }
    indataq.close();

    cout << fullchar;
    */

    ifstream indata3;
     indata3.open("key.dat");
    int size;  //make this into input key
    //ifstream indatax;
    // indatax.open("size.dat");
    // indatax >> size;
    // indatax.close();
    int merge;
    int cklog;
    int cklog2;
     char ckchar1;
     char ckchar2;
     int cknum;
     int cknum2;
     //char ckchar2;

     indata3 >> size;
     indata3 >> merge;
     indata3 >> cklog;
     indata3 >> cklog2;
     indata3 >> ckchar1;
     indata3 >> ckchar2;

    cknum = (int)ckchar1 + size + 2*size;
    cknum2 = (int)ckchar2 + size + 2*size;

  //cout << ckchar1;

    //size = size -1;

  //      if(size > 500){
  //  merge = 50; //size/5;
  //  }else{
  //  merge = 20;
 //   }



    //int merge = size/10;


     int keyval[size][merge]; // = {0};
    int keyval2[size][merge]; // = {0};
  //  char keyval3[size][merge]; // = {0};
    int injectpos2[size][merge]; // = {0};
    //string str;
    //char injchar[size];


                 for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){
             injectpos2[j][i]=0;
             keyval[j][i] = 0;
             keyval2[j][i] =0;

         }
     }
     /*
         for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){

            indata3 >> keyval3[j][i];
            //cout << keyval3[j][i] << " ";

         }
         }
     */
         for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){
             indata3 >> keyval[j][i];
             indata3 >> keyval2[j][i];
         }
         }

                 for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){
        keyval[j][i] = keyval[j][i] - size;
             keyval2[j][i] = keyval2[j][i] - size;
         }
         }


     for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){


        if(keyval[j][i]+size == cknum){
            keyval[j][i] = cklog;
        }

                if(keyval[j][i]+size == cknum2){
            keyval[j][i] = cklog2;
        }

        //indata3 >> str;
        //cout << keyval[j][i] << " ";
            // }
            // if(injectpos2[j][i]>=5){




        //cout << (int)'a' << " ";

    //	if(keyval[j][i]=='0'){
    //		keyval[j][i] = cklog;
    //	}

        if(keyval2[j][i]+size == cknum){
            keyval2[j][i] = cklog;
        }

                if(keyval2[j][i]+size == cknum2){
            keyval2[j][i] = cklog2;
        }

        injectpos2[j][i] = keyval2[j][i];

            // }
  //      cout << injectpos2[j][i] << " ";
  //	   cout << keyval[j][i] << " ";
  //      cout << keyval2[j][i] << " ";

         }

     }

     cout << endl;

    indata3.close();



        //reading the crypt words
        ifstream indata4;
     indata4.open("wordlock.dat");
     char wordcrypt[size][merge];
    char wordcrypt2[size][merge];
     //char injchar2[size][merge];
     for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){

       // cout << word << endl;
      // indata4 >> injchar2[j][i];
             if(injectpos2[j][i] < 5){
        indata4 >> wordcrypt[j][i];  //EOF flag
             }
             if(injectpos2[j][i] >= 5){
        indata4 >> wordcrypt2[j][i];
             }
       // cout << wordcrypt[j][i];
       // cout << wordcrypt2[j][i];

         }
        // cout << endl;


     }

    indata4.close();



            //reveals the true demon

     char wordrev[size];
    char wordrev2[size];
    char wordrevx[size][merge];
    char wordrevy[size][merge];

     for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){

        wordrev[keyval[j][i]] = ' ';

        wordrev2[keyval2[j][i]] = ' ';


  //		cout << wordrev[j] << " ";

         }
         //cout << endl;
     }


     for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){

       // cout << word << endl;
        //indata4 >> wordcrypt[j][i];  //EOF flag
        //cout << wordcrypt[j][i] << " ";
             if(injectpos2[j][i] < 5){
        wordrev[keyval[j][i]] = wordcrypt[j][i];
        //cout << wordrev[keyval[j][i]];
             }
             if(injectpos2[j][i] >= 5){
        wordrev2[keyval2[j][i]] = wordcrypt2[j][i];
        //cout << wordrev2[keyval[j][i]];
             }
             wordrevx[j][i] = wordrev[j];
             wordrevy[j][i] = wordrev[j];
  //		cout << wordrev[j] << " ";

         }
         //cout << endl;
     }

     for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){

        if(i>0){

        if(wordrevx[j][i]==wordrevy[j][i-1]){
                        wordrevx[j][i]=wordrevy[j][i-1];

        }
        }
        cout << wordrevx[j][i] << " ";
           //  delay(dl);

    }

    cout << endl;
     }

         for(int i=0; i <merge; i++){
         for(int j=0; j< size; j++){

        wordrev[j] = wordrevx[j][i];

    }

  }


    //cout << endl;

        ofstream odata5;
        odata5.open("revealdem.dat");

        cout << "###################################" << endl;

  for(int i=0; i < size; i++){

     odata5 << wordrev[i];

        cout << wordrev[i];

    //cout << endl;
  }
  cout << endl;
        cout << "###################################" << endl;
  cout << endl;



    odata5.close();

   for(int i=0; i < size; i++){

      // odata5 << wordrev[i];

   const QChar qw = wordrev[i];

   //qw.push_back(wordrev[i]);
    ui->textBrowser->setTextBackgroundColor(Qt::green);
    ui->textBrowser->setTextColor(Qt::black);

       //ui->textBrowser->setPlainText(qw);
       ui->textBrowser->insertPlainText(qw);


         // cout << wordrev[i];

      //cout << endl;
   }


}


void MainWindow::on_pushButton_2_released()
{
    //ui->plainTextEdit->setTextBackgroundColor(Qt::green);
     ui->plainTextEdit->setPlainText("      locked message revealed!");
}


void MainWindow::on_pushButton_3_clicked()
{
    QString sshtex = ui->textEdit_6->toPlainText();

    ui->textBrowser->setTextBackgroundColor(Qt::blue);
     ui->textBrowser->setTextColor(Qt::green);
      ui->textBrowser->insertPlainText(sshtex);

    //  ofstream outdataxf;
    //  outdataxf.open("inp.dat");

    //  outdataxf << text;

      const QString qsPath("ssh_trans.sh");

      QFile qsFile(qsPath);

        if (qsFile.open(QIODevice::WriteOnly)) {
          QTextStream out(&qsFile);
          out << "scp ./key.dat";
            out << " ";
          out << sshtex;
           //out << " ";
           out << ":./";
          qsFile.close();
        }

        system("./ssh_trans.sh");

        //exit(0);

      //  return 0;


}


void MainWindow::on_pushButton_4_clicked()
{
    exit(0);
}

