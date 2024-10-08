#ifdef __CLING__
#pragma cling optimize(0)
#endif
void theta_e()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Sep  9 15:25:37 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-5.526316,-289578.9,40.52632,2123578);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   hs->SetMaximum(1834000);
   
   TH1F *hs_stack_24 = new TH1F("hs_stack_24","",200,0,35);
   hs_stack_24->SetMinimum(0);
   hs_stack_24->SetMaximum(1834000);
   hs_stack_24->SetDirectory(nullptr);
   hs_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_24->SetLineColor(ci);
   hs_stack_24->SetLineWidth(0);
   hs_stack_24->GetXaxis()->SetTitle("#theta_{e} [Deg.]");
   hs_stack_24->GetXaxis()->SetLabelFont(42);
   hs_stack_24->GetXaxis()->SetTitleSize(0.05);
   hs_stack_24->GetXaxis()->SetTitleOffset(1);
   hs_stack_24->GetXaxis()->SetTitleFont(42);
   hs_stack_24->GetYaxis()->SetLabelFont(42);
   hs_stack_24->GetYaxis()->SetTitleFont(42);
   hs_stack_24->GetZaxis()->SetLabelFont(42);
   hs_stack_24->GetZaxis()->SetTitleOffset(1);
   hs_stack_24->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_24);
   
   
   TH1F *theta_e_stack_1 = new TH1F("theta_e_stack_1","",200,0,35);
   theta_e_stack_1->SetBinContent(4,5);
   theta_e_stack_1->SetBinContent(5,4);
   theta_e_stack_1->SetBinContent(6,1);
   theta_e_stack_1->SetBinContent(7,15);
   theta_e_stack_1->SetBinContent(8,8);
   theta_e_stack_1->SetBinContent(9,14);
   theta_e_stack_1->SetBinContent(10,26);
   theta_e_stack_1->SetBinContent(11,37);
   theta_e_stack_1->SetBinContent(12,38);
   theta_e_stack_1->SetBinContent(13,61);
   theta_e_stack_1->SetBinContent(14,102);
   theta_e_stack_1->SetBinContent(15,140);
   theta_e_stack_1->SetBinContent(16,154);
   theta_e_stack_1->SetBinContent(17,220);
   theta_e_stack_1->SetBinContent(18,304);
   theta_e_stack_1->SetBinContent(19,441);
   theta_e_stack_1->SetBinContent(20,632);
   theta_e_stack_1->SetBinContent(21,928);
   theta_e_stack_1->SetBinContent(22,1326);
   theta_e_stack_1->SetBinContent(23,2038);
   theta_e_stack_1->SetBinContent(24,3272);
   theta_e_stack_1->SetBinContent(25,5476);
   theta_e_stack_1->SetBinContent(26,8757);
   theta_e_stack_1->SetBinContent(27,14235);
   theta_e_stack_1->SetBinContent(28,23090);
   theta_e_stack_1->SetBinContent(29,40716);
   theta_e_stack_1->SetBinContent(30,89893);
   theta_e_stack_1->SetBinContent(31,484882);
   theta_e_stack_1->SetBinContent(32,1340997);
   theta_e_stack_1->SetBinContent(33,1279011);
   theta_e_stack_1->SetBinContent(34,1049996);
   theta_e_stack_1->SetBinContent(35,1528333);
   theta_e_stack_1->SetBinContent(36,1480264);
   theta_e_stack_1->SetBinContent(37,1443968);
   theta_e_stack_1->SetBinContent(38,1372679);
   theta_e_stack_1->SetBinContent(39,1303374);
   theta_e_stack_1->SetBinContent(40,1254700);
   theta_e_stack_1->SetBinContent(41,1178724);
   theta_e_stack_1->SetBinContent(42,1156452);
   theta_e_stack_1->SetBinContent(43,1069274);
   theta_e_stack_1->SetBinContent(44,1013357);
   theta_e_stack_1->SetBinContent(45,984284);
   theta_e_stack_1->SetBinContent(46,921435);
   theta_e_stack_1->SetBinContent(47,890427);
   theta_e_stack_1->SetBinContent(48,827207);
   theta_e_stack_1->SetBinContent(49,796213);
   theta_e_stack_1->SetBinContent(50,749700);
   theta_e_stack_1->SetBinContent(51,711389);
   theta_e_stack_1->SetBinContent(52,683517);
   theta_e_stack_1->SetBinContent(53,640028);
   theta_e_stack_1->SetBinContent(54,614788);
   theta_e_stack_1->SetBinContent(55,582189);
   theta_e_stack_1->SetBinContent(56,553842);
   theta_e_stack_1->SetBinContent(57,529986);
   theta_e_stack_1->SetBinContent(58,500884);
   theta_e_stack_1->SetBinContent(59,482389);
   theta_e_stack_1->SetBinContent(60,457870);
   theta_e_stack_1->SetBinContent(61,437725);
   theta_e_stack_1->SetBinContent(62,416503);
   theta_e_stack_1->SetBinContent(63,396622);
   theta_e_stack_1->SetBinContent(64,381545);
   theta_e_stack_1->SetBinContent(65,361222);
   theta_e_stack_1->SetBinContent(66,345849);
   theta_e_stack_1->SetBinContent(67,329604);
   theta_e_stack_1->SetBinContent(68,316707);
   theta_e_stack_1->SetBinContent(69,300432);
   theta_e_stack_1->SetBinContent(70,286820);
   theta_e_stack_1->SetBinContent(71,276293);
   theta_e_stack_1->SetBinContent(72,264067);
   theta_e_stack_1->SetBinContent(73,253807);
   theta_e_stack_1->SetBinContent(74,242561);
   theta_e_stack_1->SetBinContent(75,232649);
   theta_e_stack_1->SetBinContent(76,222949);
   theta_e_stack_1->SetBinContent(77,213911);
   theta_e_stack_1->SetBinContent(78,206441);
   theta_e_stack_1->SetBinContent(79,198047);
   theta_e_stack_1->SetBinContent(80,189984);
   theta_e_stack_1->SetBinContent(81,181556);
   theta_e_stack_1->SetBinContent(82,176206);
   theta_e_stack_1->SetBinContent(83,169287);
   theta_e_stack_1->SetBinContent(84,162579);
   theta_e_stack_1->SetBinContent(85,155502);
   theta_e_stack_1->SetBinContent(86,149259);
   theta_e_stack_1->SetBinContent(87,143769);
   theta_e_stack_1->SetBinContent(88,137937);
   theta_e_stack_1->SetBinContent(89,134316);
   theta_e_stack_1->SetBinContent(90,128133);
   theta_e_stack_1->SetBinContent(91,123663);
   theta_e_stack_1->SetBinContent(92,118200);
   theta_e_stack_1->SetBinContent(93,114295);
   theta_e_stack_1->SetBinContent(94,109532);
   theta_e_stack_1->SetBinContent(95,105049);
   theta_e_stack_1->SetBinContent(96,100813);
   theta_e_stack_1->SetBinContent(97,97279);
   theta_e_stack_1->SetBinContent(98,94554);
   theta_e_stack_1->SetBinContent(99,90700);
   theta_e_stack_1->SetBinContent(100,87281);
   theta_e_stack_1->SetBinContent(101,83577);
   theta_e_stack_1->SetBinContent(102,81662);
   theta_e_stack_1->SetBinContent(103,78844);
   theta_e_stack_1->SetBinContent(104,75521);
   theta_e_stack_1->SetBinContent(105,72590);
   theta_e_stack_1->SetBinContent(106,70217);
   theta_e_stack_1->SetBinContent(107,67162);
   theta_e_stack_1->SetBinContent(108,65333);
   theta_e_stack_1->SetBinContent(109,62659);
   theta_e_stack_1->SetBinContent(110,59800);
   theta_e_stack_1->SetBinContent(111,57561);
   theta_e_stack_1->SetBinContent(112,56235);
   theta_e_stack_1->SetBinContent(113,53479);
   theta_e_stack_1->SetBinContent(114,51811);
   theta_e_stack_1->SetBinContent(115,50657);
   theta_e_stack_1->SetBinContent(116,48370);
   theta_e_stack_1->SetBinContent(117,46960);
   theta_e_stack_1->SetBinContent(118,45494);
   theta_e_stack_1->SetBinContent(119,43980);
   theta_e_stack_1->SetBinContent(120,42161);
   theta_e_stack_1->SetBinContent(121,40819);
   theta_e_stack_1->SetBinContent(122,39401);
   theta_e_stack_1->SetBinContent(123,37822);
   theta_e_stack_1->SetBinContent(124,36518);
   theta_e_stack_1->SetBinContent(125,35279);
   theta_e_stack_1->SetBinContent(126,34555);
   theta_e_stack_1->SetBinContent(127,32765);
   theta_e_stack_1->SetBinContent(128,32077);
   theta_e_stack_1->SetBinContent(129,30597);
   theta_e_stack_1->SetBinContent(130,29617);
   theta_e_stack_1->SetBinContent(131,28599);
   theta_e_stack_1->SetBinContent(132,27431);
   theta_e_stack_1->SetBinContent(133,26421);
   theta_e_stack_1->SetBinContent(134,25466);
   theta_e_stack_1->SetBinContent(135,24351);
   theta_e_stack_1->SetBinContent(136,23376);
   theta_e_stack_1->SetBinContent(137,22417);
   theta_e_stack_1->SetBinContent(138,21567);
   theta_e_stack_1->SetBinContent(139,20557);
   theta_e_stack_1->SetBinContent(140,19646);
   theta_e_stack_1->SetBinContent(141,18689);
   theta_e_stack_1->SetBinContent(142,17663);
   theta_e_stack_1->SetBinContent(143,16574);
   theta_e_stack_1->SetBinContent(144,15968);
   theta_e_stack_1->SetBinContent(145,15208);
   theta_e_stack_1->SetBinContent(146,13978);
   theta_e_stack_1->SetBinContent(147,13232);
   theta_e_stack_1->SetBinContent(148,12532);
   theta_e_stack_1->SetBinContent(149,11629);
   theta_e_stack_1->SetBinContent(150,11002);
   theta_e_stack_1->SetBinContent(151,9979);
   theta_e_stack_1->SetBinContent(152,9199);
   theta_e_stack_1->SetBinContent(153,8516);
   theta_e_stack_1->SetBinContent(154,7818);
   theta_e_stack_1->SetBinContent(155,7049);
   theta_e_stack_1->SetBinContent(156,6623);
   theta_e_stack_1->SetBinContent(157,5842);
   theta_e_stack_1->SetBinContent(158,5169);
   theta_e_stack_1->SetBinContent(159,4793);
   theta_e_stack_1->SetBinContent(160,4146);
   theta_e_stack_1->SetBinContent(161,3720);
   theta_e_stack_1->SetBinContent(162,3400);
   theta_e_stack_1->SetBinContent(163,2998);
   theta_e_stack_1->SetBinContent(164,2507);
   theta_e_stack_1->SetBinContent(165,2235);
   theta_e_stack_1->SetBinContent(166,1861);
   theta_e_stack_1->SetBinContent(167,1559);
   theta_e_stack_1->SetBinContent(168,1294);
   theta_e_stack_1->SetBinContent(169,1066);
   theta_e_stack_1->SetBinContent(170,816);
   theta_e_stack_1->SetBinContent(171,629);
   theta_e_stack_1->SetBinContent(172,505);
   theta_e_stack_1->SetBinContent(173,385);
   theta_e_stack_1->SetBinContent(174,305);
   theta_e_stack_1->SetBinContent(175,225);
   theta_e_stack_1->SetBinContent(176,161);
   theta_e_stack_1->SetBinContent(177,140);
   theta_e_stack_1->SetBinContent(178,74);
   theta_e_stack_1->SetBinContent(179,63);
   theta_e_stack_1->SetBinContent(180,55);
   theta_e_stack_1->SetBinContent(181,45);
   theta_e_stack_1->SetBinContent(182,30);
   theta_e_stack_1->SetBinContent(183,23);
   theta_e_stack_1->SetBinContent(184,21);
   theta_e_stack_1->SetBinContent(185,17);
   theta_e_stack_1->SetBinContent(186,17);
   theta_e_stack_1->SetBinContent(187,25);
   theta_e_stack_1->SetBinContent(188,14);
   theta_e_stack_1->SetBinContent(189,12);
   theta_e_stack_1->SetBinContent(190,11);
   theta_e_stack_1->SetBinContent(191,15);
   theta_e_stack_1->SetBinContent(192,11);
   theta_e_stack_1->SetBinContent(193,11);
   theta_e_stack_1->SetBinContent(194,12);
   theta_e_stack_1->SetBinContent(195,14);
   theta_e_stack_1->SetBinContent(196,12);
   theta_e_stack_1->SetBinContent(197,5);
   theta_e_stack_1->SetBinContent(198,7);
   theta_e_stack_1->SetBinContent(199,8);
   theta_e_stack_1->SetBinContent(200,7);
   theta_e_stack_1->SetBinContent(201,166);
   theta_e_stack_1->SetEntries(3.857118e+07);
   theta_e_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   3.857118e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  9.371");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  3.922");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   theta_e_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(theta_e_stack_1);

   ci = TColor::GetColor("#121415");
   theta_e_stack_1->SetLineColor(ci);
   theta_e_stack_1->GetXaxis()->SetLabelFont(42);
   theta_e_stack_1->GetXaxis()->SetTitleOffset(1);
   theta_e_stack_1->GetXaxis()->SetTitleFont(42);
   theta_e_stack_1->GetYaxis()->SetLabelFont(42);
   theta_e_stack_1->GetYaxis()->SetTitleFont(42);
   theta_e_stack_1->GetZaxis()->SetLabelFont(42);
   theta_e_stack_1->GetZaxis()->SetTitleOffset(1);
   theta_e_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(theta_e_stack_1,"sames histo");
   
   TH1F *theta_e_stack_2 = new TH1F("theta_e_stack_2","",200,0,35);
   theta_e_stack_2->SetBinContent(5,1);
   theta_e_stack_2->SetBinContent(6,1);
   theta_e_stack_2->SetBinContent(7,2);
   theta_e_stack_2->SetBinContent(8,1);
   theta_e_stack_2->SetBinContent(9,4);
   theta_e_stack_2->SetBinContent(10,7);
   theta_e_stack_2->SetBinContent(11,12);
   theta_e_stack_2->SetBinContent(12,4);
   theta_e_stack_2->SetBinContent(13,11);
   theta_e_stack_2->SetBinContent(14,28);
   theta_e_stack_2->SetBinContent(15,37);
   theta_e_stack_2->SetBinContent(16,35);
   theta_e_stack_2->SetBinContent(17,42);
   theta_e_stack_2->SetBinContent(18,61);
   theta_e_stack_2->SetBinContent(19,85);
   theta_e_stack_2->SetBinContent(20,131);
   theta_e_stack_2->SetBinContent(21,217);
   theta_e_stack_2->SetBinContent(22,264);
   theta_e_stack_2->SetBinContent(23,441);
   theta_e_stack_2->SetBinContent(24,679);
   theta_e_stack_2->SetBinContent(25,1056);
   theta_e_stack_2->SetBinContent(26,1573);
   theta_e_stack_2->SetBinContent(27,2595);
   theta_e_stack_2->SetBinContent(28,4539);
   theta_e_stack_2->SetBinContent(29,9019);
   theta_e_stack_2->SetBinContent(30,25956);
   theta_e_stack_2->SetBinContent(31,358097);
   theta_e_stack_2->SetBinContent(32,1184418);
   theta_e_stack_2->SetBinContent(33,1123531);
   theta_e_stack_2->SetBinContent(34,907946);
   theta_e_stack_2->SetBinContent(35,1391142);
   theta_e_stack_2->SetBinContent(36,1350569);
   theta_e_stack_2->SetBinContent(37,1324799);
   theta_e_stack_2->SetBinContent(38,1262124);
   theta_e_stack_2->SetBinContent(39,1201540);
   theta_e_stack_2->SetBinContent(40,1157676);
   theta_e_stack_2->SetBinContent(41,1087948);
   theta_e_stack_2->SetBinContent(42,1071673);
   theta_e_stack_2->SetBinContent(43,989183);
   theta_e_stack_2->SetBinContent(44,939439);
   theta_e_stack_2->SetBinContent(45,913367);
   theta_e_stack_2->SetBinContent(46,855332);
   theta_e_stack_2->SetBinContent(47,827964);
   theta_e_stack_2->SetBinContent(48,768903);
   theta_e_stack_2->SetBinContent(49,741109);
   theta_e_stack_2->SetBinContent(50,698617);
   theta_e_stack_2->SetBinContent(51,663185);
   theta_e_stack_2->SetBinContent(52,637234);
   theta_e_stack_2->SetBinContent(53,596413);
   theta_e_stack_2->SetBinContent(54,574198);
   theta_e_stack_2->SetBinContent(55,544210);
   theta_e_stack_2->SetBinContent(56,517882);
   theta_e_stack_2->SetBinContent(57,496290);
   theta_e_stack_2->SetBinContent(58,468778);
   theta_e_stack_2->SetBinContent(59,451744);
   theta_e_stack_2->SetBinContent(60,428966);
   theta_e_stack_2->SetBinContent(61,410621);
   theta_e_stack_2->SetBinContent(62,390395);
   theta_e_stack_2->SetBinContent(63,371832);
   theta_e_stack_2->SetBinContent(64,357854);
   theta_e_stack_2->SetBinContent(65,338377);
   theta_e_stack_2->SetBinContent(66,323974);
   theta_e_stack_2->SetBinContent(67,308885);
   theta_e_stack_2->SetBinContent(68,296829);
   theta_e_stack_2->SetBinContent(69,281070);
   theta_e_stack_2->SetBinContent(70,268279);
   theta_e_stack_2->SetBinContent(71,258887);
   theta_e_stack_2->SetBinContent(72,247250);
   theta_e_stack_2->SetBinContent(73,237912);
   theta_e_stack_2->SetBinContent(74,227168);
   theta_e_stack_2->SetBinContent(75,217704);
   theta_e_stack_2->SetBinContent(76,208726);
   theta_e_stack_2->SetBinContent(77,200222);
   theta_e_stack_2->SetBinContent(78,193052);
   theta_e_stack_2->SetBinContent(79,185643);
   theta_e_stack_2->SetBinContent(80,177857);
   theta_e_stack_2->SetBinContent(81,169995);
   theta_e_stack_2->SetBinContent(82,164825);
   theta_e_stack_2->SetBinContent(83,158314);
   theta_e_stack_2->SetBinContent(84,152007);
   theta_e_stack_2->SetBinContent(85,145289);
   theta_e_stack_2->SetBinContent(86,139461);
   theta_e_stack_2->SetBinContent(87,134363);
   theta_e_stack_2->SetBinContent(88,128508);
   theta_e_stack_2->SetBinContent(89,125185);
   theta_e_stack_2->SetBinContent(90,119374);
   theta_e_stack_2->SetBinContent(91,115385);
   theta_e_stack_2->SetBinContent(92,110047);
   theta_e_stack_2->SetBinContent(93,106564);
   theta_e_stack_2->SetBinContent(94,102196);
   theta_e_stack_2->SetBinContent(95,97884);
   theta_e_stack_2->SetBinContent(96,93878);
   theta_e_stack_2->SetBinContent(97,90570);
   theta_e_stack_2->SetBinContent(98,87880);
   theta_e_stack_2->SetBinContent(99,84352);
   theta_e_stack_2->SetBinContent(100,81134);
   theta_e_stack_2->SetBinContent(101,77674);
   theta_e_stack_2->SetBinContent(102,75940);
   theta_e_stack_2->SetBinContent(103,73187);
   theta_e_stack_2->SetBinContent(104,70106);
   theta_e_stack_2->SetBinContent(105,67393);
   theta_e_stack_2->SetBinContent(106,65175);
   theta_e_stack_2->SetBinContent(107,62369);
   theta_e_stack_2->SetBinContent(108,60537);
   theta_e_stack_2->SetBinContent(109,58074);
   theta_e_stack_2->SetBinContent(110,55345);
   theta_e_stack_2->SetBinContent(111,53401);
   theta_e_stack_2->SetBinContent(112,51953);
   theta_e_stack_2->SetBinContent(113,49601);
   theta_e_stack_2->SetBinContent(114,47959);
   theta_e_stack_2->SetBinContent(115,46870);
   theta_e_stack_2->SetBinContent(116,44756);
   theta_e_stack_2->SetBinContent(117,43405);
   theta_e_stack_2->SetBinContent(118,42044);
   theta_e_stack_2->SetBinContent(119,40629);
   theta_e_stack_2->SetBinContent(120,39048);
   theta_e_stack_2->SetBinContent(121,37812);
   theta_e_stack_2->SetBinContent(122,36465);
   theta_e_stack_2->SetBinContent(123,34943);
   theta_e_stack_2->SetBinContent(124,33800);
   theta_e_stack_2->SetBinContent(125,32668);
   theta_e_stack_2->SetBinContent(126,31998);
   theta_e_stack_2->SetBinContent(127,30325);
   theta_e_stack_2->SetBinContent(128,29692);
   theta_e_stack_2->SetBinContent(129,28286);
   theta_e_stack_2->SetBinContent(130,27341);
   theta_e_stack_2->SetBinContent(131,26514);
   theta_e_stack_2->SetBinContent(132,25378);
   theta_e_stack_2->SetBinContent(133,24460);
   theta_e_stack_2->SetBinContent(134,23442);
   theta_e_stack_2->SetBinContent(135,22558);
   theta_e_stack_2->SetBinContent(136,21584);
   theta_e_stack_2->SetBinContent(137,20679);
   theta_e_stack_2->SetBinContent(138,19886);
   theta_e_stack_2->SetBinContent(139,18922);
   theta_e_stack_2->SetBinContent(140,18114);
   theta_e_stack_2->SetBinContent(141,17198);
   theta_e_stack_2->SetBinContent(142,16167);
   theta_e_stack_2->SetBinContent(143,15246);
   theta_e_stack_2->SetBinContent(144,14611);
   theta_e_stack_2->SetBinContent(145,13920);
   theta_e_stack_2->SetBinContent(146,12715);
   theta_e_stack_2->SetBinContent(147,12064);
   theta_e_stack_2->SetBinContent(148,11339);
   theta_e_stack_2->SetBinContent(149,10568);
   theta_e_stack_2->SetBinContent(150,9831);
   theta_e_stack_2->SetBinContent(151,8990);
   theta_e_stack_2->SetBinContent(152,8193);
   theta_e_stack_2->SetBinContent(153,7555);
   theta_e_stack_2->SetBinContent(154,6889);
   theta_e_stack_2->SetBinContent(155,6233);
   theta_e_stack_2->SetBinContent(156,5780);
   theta_e_stack_2->SetBinContent(157,5059);
   theta_e_stack_2->SetBinContent(158,4394);
   theta_e_stack_2->SetBinContent(159,4009);
   theta_e_stack_2->SetBinContent(160,3464);
   theta_e_stack_2->SetBinContent(161,3025);
   theta_e_stack_2->SetBinContent(162,2733);
   theta_e_stack_2->SetBinContent(163,2334);
   theta_e_stack_2->SetBinContent(164,1908);
   theta_e_stack_2->SetBinContent(165,1617);
   theta_e_stack_2->SetBinContent(166,1334);
   theta_e_stack_2->SetBinContent(167,1053);
   theta_e_stack_2->SetBinContent(168,830);
   theta_e_stack_2->SetBinContent(169,675);
   theta_e_stack_2->SetBinContent(170,499);
   theta_e_stack_2->SetBinContent(171,363);
   theta_e_stack_2->SetBinContent(172,279);
   theta_e_stack_2->SetBinContent(173,200);
   theta_e_stack_2->SetBinContent(174,161);
   theta_e_stack_2->SetBinContent(175,105);
   theta_e_stack_2->SetBinContent(176,60);
   theta_e_stack_2->SetBinContent(177,49);
   theta_e_stack_2->SetBinContent(178,23);
   theta_e_stack_2->SetBinContent(179,16);
   theta_e_stack_2->SetBinContent(180,14);
   theta_e_stack_2->SetBinContent(181,15);
   theta_e_stack_2->SetBinContent(182,10);
   theta_e_stack_2->SetBinContent(183,8);
   theta_e_stack_2->SetBinContent(184,2);
   theta_e_stack_2->SetBinContent(185,3);
   theta_e_stack_2->SetBinContent(186,5);
   theta_e_stack_2->SetBinContent(187,9);
   theta_e_stack_2->SetBinContent(188,1);
   theta_e_stack_2->SetBinContent(189,2);
   theta_e_stack_2->SetBinContent(191,4);
   theta_e_stack_2->SetBinContent(192,1);
   theta_e_stack_2->SetBinContent(193,2);
   theta_e_stack_2->SetBinContent(196,1);
   theta_e_stack_2->SetBinContent(198,1);
   theta_e_stack_2->SetBinContent(200,1);
   theta_e_stack_2->SetBinContent(201,16);
   theta_e_stack_2->SetEntries(3.537274e+07);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.537274e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  9.425");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  3.905");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   theta_e_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(theta_e_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   theta_e_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   theta_e_stack_2->SetLineColor(ci);
   theta_e_stack_2->GetXaxis()->SetLabelFont(42);
   theta_e_stack_2->GetXaxis()->SetTitleOffset(1);
   theta_e_stack_2->GetXaxis()->SetTitleFont(42);
   theta_e_stack_2->GetYaxis()->SetLabelFont(42);
   theta_e_stack_2->GetYaxis()->SetTitleFont(42);
   theta_e_stack_2->GetZaxis()->SetLabelFont(42);
   theta_e_stack_2->GetZaxis()->SetTitleOffset(1);
   theta_e_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(theta_e_stack_2,"sames histo");
   hs->Draw("hist nostack");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.857118e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  9.371");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  3.922");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.537274e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  9.425");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  3.905");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
