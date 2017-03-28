//                                    8888888b.                    888      
//                                    888  "Y88b                   888      
//                                    888    888                   888      
//88888b.   8888b.   .d88b.   .d88b.  888    888  8888b.  .d8888b  88888b.  
//888 "88b     "88b d88P"88b d8P  Y8b 888    888     "88b 88K      888 "88b 
//888  888 .d888888 888  888 88888888 888    888 .d888888 "Y8888b. 888  888 
//888 d88P 888  888 Y88b 888 Y8b.     888  .d88P 888  888      X88 888  888 
//88888P"  "Y888888  "Y88888  "Y8888  8888888P"  "Y888888  88888P' 888  888 
//888                    888                                                
//888               Y8b d88P                                                
//888                "Y88P"                                                 
//
// By: Jake Priddy
// 3/27/2017
//// Combined with a Teensy (also works with arduino) pageDash opens the terminal, 
//// creates an html file on the desktop, writes a 1,966 word, 12,456 character 
//// website about the preamble and all ten amendments to the constitution with 
//// back story in html format. It then opens the page on the device's default browser, 
//// deletes the original file off the device closes the terminal and runs the newly 
//// created file leaving nothing more than the page open on the browser. 
//// All in less than 50 seconds


// create a delay to allow load time
int ds = 500;

void setup()
{
  
  // give us a little time to connect up
  delay(ds);
  //open the terminal through spotlight or alfred
  openapp("Terminal"); 
  //go to desktop folder
  typeln("cd Desktop");
  //create html file and open it with the vi editor 
  typeln("vi preamble.html");
  //put vi in edit mode
  typeln("i");
  //wait for vi to load
  delay(ds);
  //write an html file with no double quotes, only single quotes and everything on one line
  typeln("<h1>The Preamble</h1><h2>First Amendment</h2><p>Main article: First Amendment to the United States Constitution</p><p>Congress shall make no law respecting an establishment of religion, or prohibiting the free exercise thereof; or abridging the freedom of speech, or of the press; or the right of the people peaceably to assemble, and to petition the Government for a redress of grievances.[91]</p><p>The First Amendment prohibits the making of any law respecting an establishment of religion, impeding the free exercise of religion, abridging the freedom of speech, infringing on the freedom of the press, interfering with the right to peaceably assemble or prohibiting the petitioning for a governmental redress of grievances. Initially, the First Amendment applied only to laws enacted by Congress, and many of its provisions were interpreted more narrowly than they are today.[92]</p><p>In Everson v. Board of Education (1947), the Court drew on Thomas Jefferson's correspondence to call for 'a wall of separation between church and State', though the precise boundary of this separation remains in dispute.[92] Speech rights were expanded significantly in a series of 20th- and 21st-century court decisions that protected various forms of political speech, anonymous speech, campaign financing, pornography, and school speech; these rulings also defined a series of exceptions to First Amendment protections. The Supreme Court overturned English common law precedent to increase the burden of proof for defamation and libel suits, most notably in New York Times Co. v. Sullivan (1964).[93] Commercial speech is less protected by the First Amendment than political speech, and is therefore subject to greater regulation.[92]</p><p>The Free Press Clause protects publication of information and opinions, and applies to a wide variety of media. In Near v. Minnesota (1931)[94] and New York Times v. United States (1971),[95] the Supreme Court ruled that the First Amendment protected against prior restraint—pre-publication censorship—in almost all cases. The Petition Clause protects the right to petition all branches and agencies of government for action. In addition to the right of assembly guaranteed by this clause, the Court has also ruled that the amendment implicitly protects freedom of association.[92]</p><h2>Second Amendment</h2><p>Main article: Second Amendment to the United States Constitution</p><p>A well regulated Militia, being necessary to the security of a free State, the right of the people to keep and bear Arms, shall not be infringed.[91]</p><p>The Second Amendment protects the individual right to keep and bear arms. The concept of such a right existed within English common law long before the enactment of the Bill of Rights.[96] First codified in the English Bill of Rights of 1689 (but there only applying to Protestants), this right was enshrined in fundamental laws of several American states during the Revolutionary era, including the 1776 Virginia Declaration of Rights and the Pennsylvania Constitution of 1776. Long a controversial issue in American political, legal, and social discourse, the Second Amendment has been at the heart of several Supreme Court decisions.</p><p>In United States v. Cruikshank (1875), the Court ruled that '[t]he right to bear arms is not granted by the Constitution; neither is it in any manner dependent upon that instrument for its existence. The Second Amendment means no more than that it shall not be infringed by Congress, and has no other effect than to restrict the powers of the National Government.'[97]</p><p>In United States v. Miller (1939), the Court ruled that the amendment '[protects arms that had a] reasonable relationship to the preservation or efficiency of a well regulated militia'.[98]In District of Columbia v. Heller (2008), the Court ruled that the Second Amendment 'codified a pre-existing right' and that it 'protects an individual right to possess a firearm unconnected with service in a militia, and to use that arm for traditionally lawful purposes, such as self-defense within the home' but also stated that 'the right is not unlimited. It is not a right to keep and carry any weapon whatsoever in any manner whatsoever and for whatever purpose'.[99]In McDonald v. Chicago (2010),[100] the Court ruled that the Second Amendment limits state and local governments to the same extent that it limits the federal government.[101]</p><h2>Third Amendment</h2><p>Main article: Third Amendment to the United States Constitution</p><p>No Soldier shall, in time of peace be quartered in any house, without the consent of the Owner, nor in time of war, but in a manner to be prescribed by law.[91]</p><p>The Third Amendment restricts the quartering of soldiers in private homes, in response to Quartering Acts passed by the British parliament during the Revolutionary War. The amendment is one of the least controversial of the Constitution, and, as of 2016, has never been the primary basis of a Supreme Court decision.[102][103][104]</p><h2>Fourth Amendment</h2><p>Main article: Fourth Amendment to the United States Constitution</p><p>The right of the people to be secure in their persons, houses, papers, and effects, against unreasonable searches and seizures, shall not be violated, and no Warrants shall issue, but upon probable cause, supported by Oath or affirmation, and particularly describing the place to be searched, and the persons or things to be seized.[91]</p><p>The Fourth Amendment guards against unreasonable searches and seizures, along with requiring any warrant to be judicially sanctioned and supported by probable cause. It was adopted as a response to the abuse of the writ of assistance, which is a type of general search warrant, in the American Revolution. Search and seizure (including arrest) must be limited in scope according to specific information supplied to the issuing court, usually by a law enforcement officer who has sworn by it. The amendment is the basis for the exclusionary rule, which mandates that evidence obtained illegally cannot be introduced into a criminal trial.[105] The amendment's interpretation has varied over time; its protections expanded under left-leaning courts such as that headed by Earl Warren and contracted under right-leaning courts such as that of William Rehnquist.[106]</p><h2>Fifth Amendment</h2><p>Main article: Fifth Amendment to the United States Constitution</p><p>No person shall be held to answer for a capital, or otherwise infamous crime, unless on a presentment or indictment of a Grand Jury, except in cases arising in the land or naval forces, or in the Militia, when in actual service in time of War or public danger; nor shall any person be subject for the same offence to be twice put in jeopardy of life or limb; nor shall be compelled in any criminal case to be a witness against himself, nor be deprived of life, liberty, or property, without due process of law; nor shall private property be taken for public use, without just compensation.[91]</p><p>The Fifth Amendment protects against double jeopardy and self-incrimination and guarantees the rights to due process, grand jury screening of criminal indictments, and compensation for the seizure of private property under eminent domain. The amendment was the basis for the court's decision in Miranda v. Arizona (1966), which established that defendants must be informed of their rights to an attorney and against self-incrimination prior to interrogation by police.[107]</p><h2>Sixth Amendment</h2><p>Main article: Sixth Amendment to the United States Constitution</p><p>In all criminal prosecutions, the accused shall enjoy the right to a speedy and public trial, by an impartial jury of the State and district wherein the crime shall have been committed, which district shall have been previously ascertained by law, and to be informed of the nature and cause of the accusation; to be confronted with the witnesses against him; to have compulsory process for obtaining witnesses in his favor, and to have the Assistance of Counsel for his defence.[91]</p><p>The Sixth Amendment establishes a number of rights of the defendant in a criminal trial:</p><p>to a speedy and public trial</p><p>to trial by an impartial jury</p><p>to be informed of criminal charges</p><p>to confront witnesses</p><p>to compel witnesses to appear in court</p><p>to assistance of counsel[108]</p><p>In Gideon v. Wainwright (1963), the Court ruled that the amendment guaranteed the right to legal representation in all felony prosecutions in both state and federal courts.[108]</p><h2>Seventh Amendment</h2><p>Main article: Seventh Amendment to the United States Constitution</p><p>In suits at common law, where the value in controversy shall exceed twenty dollars, the right of trial by jury shall be preserved, and no fact tried by a jury, shall be otherwise re-examined in any court of the United States, than according to the rules of the common law.[91]</p><p>The Seventh Amendment guarantees jury trials in federal civil cases that deal with claims of more than twenty dollars. It also prohibits judges from overruling findings of fact by juries in federal civil trials. In Colgrove v. Battin (1973), the Court ruled that the amendment's requirements could be fulfilled by a jury with a minimum of six members. The Seventh is one of the few parts of the Bill of Rights not to be incorporated (applied to the states).[109]</p><h2>Eighth Amendment</h2><p>Main article: Eighth Amendment to the United States Constitution</p><p>Excessive bail shall not be required, nor excessive fines imposed, nor cruel and unusual punishments inflicted.[91]</p><p>The Eighth Amendment forbids the imposition of excessive bails or fines, though it leaves the term 'excessive' open to interpretation.[110] The most frequently litigated clause of the amendment is the last, which forbids cruel and unusual punishment.[111][112] This clause was only occasionally applied by the Supreme Court prior to the 1970s, generally in cases dealing with means of execution. In Furman v. Georgia (1972), some members of the Court found capital punishment itself in violation of the amendment, arguing that the clause could reflect 'evolving standards of decency' as public opinion changed; others found certain practices in capital trials to be unacceptably arbitrary, resulting in a majority decision that effectively halted executions in the United States for several years.[113] Executions resumed following Gregg v. Georgia (1976), which found capital punishment to be constitutional if the jury was directed by concrete sentencing guidelines.[113] The Court has also found that some poor prison conditions constitute cruel and unusual punishment, as in Estelle v. Gamble (1976) and Brown v. Plata (2011).[111]</p><h2>Ninth Amendment</h2><p>Main article: Ninth Amendment to the United States Constitution</p><p>The enumeration in the Constitution, of certain rights, shall not be construed to deny or disparage others retained by the people.[91]</p><p>The Ninth Amendment declares that there are additional fundamental rights that exist outside the Constitution. The rights enumerated in the Constitution are not an explicit and exhaustive list of individual rights. It was rarely mentioned in Supreme Court decisions before the second half of the 20th century, when it was cited by several of the justices in Griswold v. Connecticut (1965). The Court in that case voided a statute prohibiting use of contraceptives as an infringement of the right of marital privacy.[114] This right was, in turn, the foundation upon which the Supreme Court built decisions in several landmark cases, including, Roe v. Wade (1973), which overturned a Texas law making it a crime to assist a woman to get an abortion, and Planned Parenthood v. Casey (1992), which invalidated a Pennsylvania law that required spousal awareness prior to obtaining an abortion.</p><h2>Tenth Amendment</h2><p>Main article: Tenth Amendment to the United States Constitution</p><p>The powers not delegated to the United States by the Constitution, nor prohibited by it to the States, are reserved to the States respectively, or to the people.[91]</p><p>The Tenth Amendment reinforces the principles of separation of powers and federalism by providing that powers not granted to the federal government by the Constitution, nor prohibited to the states, are reserved to the states or the people. The amendment provides no new powers or rights to the states, but rather preserves their authority in all matters not specifically granted to the federal government.[115]</p><p>Congress has sometimes gotten around the Tenth Amendment by invoking the Commerce Clause in Article One[116] or by threatening to withhold funding for a federal program from noncooperative States, as in South Dakota v. Dole (1987).</p>");
  //exit vi edit mode
  delay(200);
  k(KEY_ESC);
  //close vi
  shift(KEY_Z);
  shift(KEY_Z);
  //run the html file on the browser
  typeln("open preamble.html");
  //go back to the terminal 
  cmd(KEY_TAB);
  //remove the file you created
  typeln("rm -rf preamble.html");
  //close the terminal 
  cmd(KEY_Q);
}

void loop(){}


// Type a string and then press enter
void typeln(String chars)
{
  Keyboard.print(chars);
  delay(ds);
  Keyboard.println("");
  delay(ds * 4);
}

// open an application on OS X via spotlight/alfred
void openapp(String app)
{
 // open spotlight (or alfred/qs), then the app
  cmd(KEY_SPACE);
  typeln(app);
}
// recieves a single key input
void k(int key)
{
  Keyboard.set_key1(key);
  Keyboard.send_now();
  delay(ds/2);

  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(ds/2);
}
//initiates a modifier key 
void mod(int mod, int key)
{
  Keyboard.set_modifier(mod);
  Keyboard.send_now();
  Keyboard.set_key1(key);
  Keyboard.send_now();
  delay(ds);

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(ds);
}
//press the control button + one other button
void ctrl(int key)
{
  mod(MODIFIERKEY_CTRL, key);
}
// press the command button + one other button
void cmd(int key)
{
  mod(MODIFIERKEY_GUI, key);
}
//press the shift button + one other button
void shift(int key)
{
  mod(MODIFIERKEY_SHIFT, key);
}




