clc
clear all
close all

k = 0.1;  % look forward gain
global Kp ;
tf = 10;
Kp = 1 ; % speed propotional gain
dt = 0.1  ;% [s]
L = 2  ;% [m] wheel base of vehicle
cx = 0:0.1:200; % sampling interception from 0 to 100, with step 0.1
for i = 1:500% here we create a original reference line, which the vehicle should always follow when there is no obstacles;
    cy(i) = -sin(cx(i)/10)*cx(i)/8;
end
for i = 501: length(cx)
    cy(i) = -sin(cx(i)/10)*cx(i)/8; %cy(500);
end

for i = 1:400
    ctarget_speed(i) = 30/3.6;
end
for i = 401:800
    ctarget_speed(i) = 40/3.6;
end
for i = 801:1200
    ctarget_speed(i) = 50/3.6;
end
for i = 1201:1600
    ctarget_speed(i) = 40/3.6;
end
for i = 1601:length(cx)
    ctarget_speed(i) = 30/3.6;
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% here we provide another reference line for testing 

% cx = [0.0, 0.0820204315351055, 0.16405076165331595, 0.24610088893773643, 0.32818071197147175, 0.41030012933762705, 0.4924690396193074, 0.5746973413996174, 0.6569949332616624, 0.7393717137885472, 0.8218375815633768, 0.9044024351692563, 0.9870761731892908, 1.0698686942065845, 1.1527898968042436, 1.235849679565372, 1.3190579410730754, 1.4024245799104587, 1.485959494660626, 1.5696725839066838, 1.6535737462317357, 1.7376728802188874, 1.821979884451244, 1.9065046575119102, 1.9912570979839908, 2.076247104450591, 2.161484575494815, 2.24697940969977, 2.3327415056485585, 2.4187807619242876, 2.5051070771100594, 2.5917303497889823, 2.678660478544159, 2.7659073619586954, 2.853480898615696, 2.9413909870982655, 3.0296475259895104, 3.1182604138725343, 3.2072395493304424, 3.29659483094634, 3.3863361573033313, 3.476473426984523, 3.5670165385730184, 3.6579753906519223, 3.749359881804342, 3.84117991061338, 3.9334453756621435, 4.026166175533734, 4.119352208811261, 4.213013374077826, 4.307159569916534, 4.401800694910493, 4.496946647642805, 4.5926073266965775, 4.6887926306549135, 4.785512458100917, 4.882776707617697, 4.980595277788353, 5.0789780671959965, 5.177934974423726, 5.277475898054651, 5.377610736671875, 5.478349388858503, 5.579701753197639, 5.68167772827239, 5.784287212665859, 5.887540104961153, 5.991446303741374, 6.096009197990546, 6.201198840432942, 6.306974641055681, 6.413296005199144, 6.520122338203711, 6.627413045409761, 6.735127532157672, 6.843225203787827, 6.9516654656406045, 7.060407723056383, 7.169411381375547, 7.278635845938471, 7.388040522085536, 7.497584815157124, 7.607228130493614, 7.716929873435386, 7.826649449322817, 7.936346263496289, 8.045979721296185, 8.155509228062881, 8.264894189136756, 8.374094009858192, 8.483068095567571, 8.591775851605268, 8.700176683311668, 8.808229996027144, 8.915895195092082, 9.02313168584686, 9.129898873631856, 9.236156163787452, 9.341862961654027, 9.446978672571962, 9.551462701881636, 9.655274454923427, 9.758373337037717, 9.860718753564889, 9.962270109845317, 10.06298681121938, 10.162828263027466, 10.261753870609947, 10.359723039307207, 10.456695174459625, 10.552629681407577, 10.647485965491452, 10.741223432051621, 10.833801486428465, 10.92517953396237, 11.015316979993708, 11.104173229862862, 11.191707688910215, 11.277879762476145, 11.362648855901028, 11.44597437452525, 11.527815723689187, 11.608132308733218, 11.686883534997726, 11.764028807823086, 11.839527532549685, 11.9133391145179, 11.985422959068107, 12.05573847154069, 12.124245057276028, 12.1909021216145, 12.255669069896483, 12.318505307462365, 12.379370239652518, 12.438223271807324, 12.495023809267167, 12.54973890452178, 12.602375656449803, 12.652954228541832, 12.7014947915228, 12.74801751611764, 12.792542573051287, 12.835090133048672, 12.875680366834732, 12.914333445134396, 12.951069538672604, 12.985908818174284, 13.018871454364373, 13.049977617967805, 13.079247479709512, 13.106701210314425, 13.132358980507481, 13.156240961013616, 13.178367322557756, 13.198758235864842, 13.217433871659805, 13.234414400667582, 13.249719993613098, 13.263370821221296, 13.275387054217104, 13.28578886332546, 13.294596419271288, 13.301829892779535, 13.307509454575126, 13.311655275382996, 13.314287525928084, 13.315426376935315, 13.315091999129628, 13.313304563235954, 13.31008423997923, 13.305451200084386, 13.299425614276359, 13.29202765328008, 13.283277487820486, 13.273195288622507, 13.26180122641108, 13.249115471911132, 13.235158195847605, 13.219949568945427, 13.203509761929535, 13.185858945524863, 13.167017290456341, 13.147004967448904, 13.125842147227486, 13.10354900051702, 13.080145698042445, 13.055652410528687, 13.030089308700683, 13.003476563283368, 12.975834345001672, 12.947182824580533, 12.91754217274488, 12.886932560219652, 12.855374157729777, 12.822887136000192, 12.78949166575583, 12.755207917721627, 12.720056062622511, 12.684056271183422, 12.647228714129286, 12.609593562185047, 12.571170986075629, 12.531981156525973, 12.492044244261002, 12.451380420005666, 12.410009854484889, 12.367952718423599, 12.325229182546735, 12.281859417579238, 12.237863594246035, 12.193261883272053, 12.148074455382238, 12.102321481301514, 12.056023131754824, 12.00919957746709, 11.961870989163257, 11.914057537568251, 11.865779393407012, 11.817056727404465, 11.767909710285553, 11.718358512775206, 11.668423305598353, 11.618124259479929, 11.567481545144876, 11.516515333318122, 11.465245794724597, 11.41369310008924, 11.361877420136981, 11.309818925592758, 11.2575377871815, 11.205054175628145, 11.152388261657622, 11.099560215994869, 11.046590209364814, 10.9934984124924, 10.940304996102551, 10.887030130920206, 10.833693987670296, 10.780316737077758, 10.726918549867523, 10.673519596764525, 10.620140048493699, 10.566800075779973, 10.51351984934829, 10.460319539923576, 10.40721931823077, 10.354239354994803, 10.301399820940603, 10.248720886793116, 10.19622272327727, 10.143925501117993, 10.091849391040228, 10.0400145637689, 9.98844107489259, 9.937130775190631, 9.886047589576616, 9.835150704129385, 9.784399304927794, 9.7337525780507, 9.68316970957695, 9.632609885585403, 9.582032292154906, 9.531396115364313, 9.480660541292481, 9.42978475601826, 9.378727945620502, 9.327449296178056, 9.275907993769783, 9.224063224474532, 9.171874174371155, 9.119300029538504, 9.066299976055433, 9.012833200000797, 8.958858887453443, 8.90433622449223, 8.849224397196009, 8.79348259164363, 8.737069993913945, 8.679945790085814, 8.622069166238083, 8.563399308449608, 8.50389540279924, 8.44351663536583, 8.382222192228236, 8.319971259465307, 8.256723023155896, 8.192436669378857, 8.127071384213043, 8.060586353737307, 7.992940764030496, 7.924093801171472, 7.854004651239081, 7.782632500312176, 7.709936534469614, 7.635875939790246, 7.5604099023529265, 7.483497762957981, 7.40512683270666, 7.325344607833358, 7.244206394660972, 7.1617674995124165, 7.078083228710588, 6.993208888578398, 6.907199785438752, 6.820111225614551, 6.731998515428706, 6.642916961204114, 6.552921869263686, 6.4620685459303315, 6.370412297526947, 6.278008430376444, 6.184912250801722, 6.091179065125691, 5.996864179671257, 5.902022900761322, 5.806710534718794, 5.710982387866576, 5.614893766527573, 5.518499977024695, 5.421856325680841, 5.325018118818923, 5.228040662761838, 5.130979263832497, 5.033889228353805, 4.9368258626486705, 4.8398444730399905, 4.743000365850674, 4.646348847403626, 4.549945224021753, 4.453844802027968, 4.358102887745161, 4.262774787496245, 4.167915807604124, 4.073581254391704, 3.9798264341818985, 3.8867066532975985, 3.7942772180617155, 3.702593434797154, 3.61171060982682, 3.5216840494736275, 3.432569060060466, 3.344420947910249, 3.2572950193458796, 3.171246580690265, 3.086330938266317, 3.0026033983969267, 2.920108549621215, 2.8388438819014783, 2.7587939515191384, 2.6799433143929905, 2.6022765264418104, 2.5257781435843945, 2.450432721739531, 2.3762248168260083, 2.3031389847626214, 2.2311597814681488, 2.160271762861384, 2.0904594848611158, 2.021707503386134, 1.9540003743552317, 1.8873226536871883, 1.8216588973007979, 1.7569936611148487, 1.69331150104813, 1.6305969730194354, 1.5688346329475444, 1.508009036751251, 1.4481047403493437, 1.3891062996606112, 1.3309982706038468, 1.2737652090978315, 1.2173916710613577, 1.161862212413215, 1.1071613890721919, 1.053273756957081, 1.0001838719866638, 0.947876290079733, 0.8963355671550775, 0.8455462591314863, 0.795492921927752, 0.7461601114626558, 0.6975323836549908, 0.6495942944235455, 0.6023303996871092, 0.5557252553644707, 0.5097634173744222, 0.4644294416357458, 0.41970788406723397, 0.3755833005876753, 0.33204024711585906, 0.28906327957057754, 0.24663695387061274, 0.204745825934757, 0.16337445168179898, 0.12250738703052838, 0.08212918789973561, 0.04222441020820539, 0.0027776098747295253, -0.03622665718190471, -0.07480383504290766, -0.1129693677894879, -0.15073869950286078, -0.1881272742642346, -0.22515053615482283, -0.2618239292558341, -0.29816289764847836, -0.33418288541397156, -0.3698993366335206, -0.40532769538833924, -0.4404834057596364, -0.47538191182862255, -0.5100386576765124, -0.5444690873845134, -0.5786886450338401, -0.6127127747057002, -0.6465569204813051, -0.6802365264418688, -0.7137670366685996, -0.7471638952427104, -0.780442546245411, -0.8136184337579115, -0.846707001861426, -0.8797236946371636, -0.9126839561663362, -0.9456032305301545, -0.9784969618098274]
% cy = [0.0, -0.037366703007607714, -0.07474321440358046, -0.11213934257628329, -0.1495648959140812, -0.1870296828053393, -0.22454351163842262, -0.2621161908016961, -0.29975752868352495, -0.3374773336722741, -0.37528541415630867, -0.41319157852399363, -0.45120563516369416, -0.48933739246377506, -0.5275966588126015, -0.5659932425985387, -0.6045369522099514, -0.6432375960352048, -0.6821049824626639, -0.721148919880694, -0.7603792166776596, -0.7998056812419262, -0.8394381219618586, -0.8792863472258223, -0.9193601654221818, -0.959669384939302, -1.0002238141655486, -1.0410332614892863, -1.08210753529888, -1.1234564439826953, -1.1650897959290965, -1.207017399526449, -1.2492490631631181, -1.2917945952274683, -1.3346638041078651, -1.3778664981926732, -1.4214124858702577, -1.465311575528984, -1.5095735755572173, -1.5542082943433218, -1.5992255402756625, -1.6446351217426058, -1.6904468471325154, -1.7366705248337566, -1.7833159632346953, -1.8303929707236954, -1.877911355689123, -1.9258809265193417, -1.9743114916027187, -2.0232128593276166, -2.0725948380824017, -2.12246723625544, -2.1728398622350946, -2.2237225244097316, -2.2751250311677156, -2.3270571908974125, -2.379528811987187, -2.432549702825403, -2.4861296718004278, -2.5402785273006243, -2.595006077714358, -2.650322131429995, -2.7062364968358987, -2.7627589823204364, -2.8198993962719707, -2.877667547078868, -2.936073243129494, -2.9951262928122118, -3.054826476456499, -3.115122219773589, -3.175945553302979, -3.2372285004258474, -3.2989030845233707, -3.36090132897673, -3.4231552571671022, -3.4855968924756664, -3.5481582582836015, -3.6107713779720854, -3.6733682749222965, -3.735880972515414, -3.798241494132616, -3.8603818631550806, -3.9222341029639893, -3.9837302369405156, -4.044802288465841, -4.105382280921146, -4.165402237687605, -4.2247941821464, -4.283490137678707, -4.341422127665705, -4.398522175488574, -4.454722304528492, -4.509954538166638, -4.564150899784188, -4.617243412762323, -4.66916410048222, -4.719844986325061, -4.76921809367202, -4.817215445904277, -4.863769066403011, -4.908810978549401, -4.952273205724626, -4.994087771309864, -5.034186698686292, -5.072502011235089, -5.1089657323374364, -5.1435098853745105, -5.17606649372749, -5.206567580777552, -5.2349451699058775, -5.261131284493644, -5.28505794792203, -5.306657183572213, -5.325861014825374, -5.342601465062691, -5.35681055766534, -5.368420316014503, -5.377362763491355, -5.3835699234770775, -5.386973819352848, -5.387506474499846, -5.385099912299248, -5.379686156132234, -5.37119722937998, -5.35956515542367, -5.344721957644477, -5.326599659423584, -5.305130284142165, -5.280245855181402, -5.251878395922473, -5.219959929746556, -5.1844224800348275, -5.145198070168469, -5.102218723528661, -5.0554164634965755, -5.004723313453395, -4.950090134033602, -4.891566432300125, -4.829233897426258, -4.763174236405681, -4.693469156232071, -4.620200363899109, -4.543449566400473, -4.4632984707298435, -4.379828783880898, -4.293122212847316, -4.203260464622775, -4.110325246200959, -4.014398264575541, -3.9155612267402033, -3.813895839688624, -3.7094838104144814, -3.602406845911456, -3.492746653173226, -3.3805849391934713, -3.26600341096587, -3.1490837754840997, -3.029907739741842, -2.908557010732775, -2.7851132954505786, -2.65965830088893, -2.5322737340415067, -2.4030413019019954, -2.272042711464064, -2.139359669721398, -2.0050738836676802, -1.8692670602965795, -1.7320209066017864, -1.5934171295769686, -1.4535374362158098, -1.3124635335119952, -1.170277128459193, -1.0270599280510933, -0.8828936392813632, -0.7378599691436885, -0.5920406246317518, -0.4455173127392231, -0.298371740459791, -0.15068561478712494, -0.002540642714907948, 0.14598146876317464, 0.29479901265345454, 0.4438302819622424, 0.5929935696958706, 0.7422071688606537, 0.8913893724629078, 1.0404584735089641, 1.1893327650051344, 1.337930539957748, 1.4861700913731224, 1.633969712257573, 1.78124769561743, 1.9279223344590108, 2.0739119217886306, 2.219134750612622, 2.363509113937294, 2.5069533047689756, 2.649385616113989, 2.7907243409786435, 2.9308877723692763, 3.0697942032921937, 3.2073619267537268, 3.3435092357601945, 3.478154423317913, 3.6112157824332094, 3.7426116061123986, 3.8722601873618068, 4.000079819187756, 4.125988794596558, 4.249905406594547, 4.3717479481880295, 4.491434712383341, 4.608883992186794, 4.724014080604706, 4.836743270643411, 4.946989855309216, 5.054672127608452, 5.159708380547434, 5.262016907132485, 5.361516000369923, 5.458123953266078, 5.551759058827262, 5.642339610059803, 5.729783899970013, 5.814010221564217, 5.89493686784874, 5.972482131829901, 6.0465643065140195, 6.1171016849074125, 6.184012560016411, 6.247215224847325, 6.306627972406487, 6.362169095700208, 6.413756887734815, 6.4613096415166265, 6.504745650051962, 6.543983206347152, 6.578940603408499, 6.60953613424234, 6.635688091854995, 6.6573147692527765, 6.6743344594420115, 6.686665455429019, 6.6942260502201165, 6.6969345368216295, 6.694709208239885, 6.68746835748119, 6.6751302775518795, 6.657613261458263, 6.634835602206671, 6.606715592803418, 6.573171526254818, 6.534121695567208, 6.48948507667127, 6.439288626224071, 6.383784255864741, 6.323251985344354, 6.257971834413989, 6.188223822824728, 6.114287970327644, 6.03644429667382, 5.95497282161433, 5.870153564900254, 5.782266546282674, 5.691591785512662, 5.598409302341302, 5.502999116519667, 5.405641247798836, 5.306615715929894, 5.20620254066391, 5.10468174175197, 5.002333338945146, 4.89943735199452, 4.796273800651171, 4.693122704666173, 4.590264083790611, 4.487977957775556, 4.386544346372089, 4.286243269331292, 4.187354746404237, 4.090158797342008, 3.9949354418956777, 3.901964699816327, 3.811526590855039, 3.723901134762883, 3.639368351290946, 3.5582082601902973, 3.480700881212022, 3.407126234107199, 3.3377643386269, 3.27289521452221, 3.2127988815442015, 3.1577553594439567, 3.1080446679725546, 3.063946826881071, 3.0257418559205838, 2.9937089792748877, 2.9679835997506907, 2.948391652310318, 2.9347189129743403, 2.926751157763331, 2.924274162697862, 2.9270737037985057, 2.934935557085835, 2.947645498580423, 2.9649893043028404, 2.986752750273661, 3.0127216125134586, 3.0426816670428023, 3.0764186898822676, 3.1137184570524243, 3.1543667445738492, 3.198149328467111, 3.244851984752782, 3.294260489451438, 3.346160618583647, 3.4003381481699866, 3.4565788542310263, 3.514668512787337, 3.574392899859495, 3.635537791468069, 3.697888963633636, 3.761232192376766, 3.8253532537180313, 3.8900379236780003, 3.955071978277253, 4.020241193536361, 4.085331345475892, 4.150128210116423, 4.214417563478519, 4.277985181582762, 4.340616840449722, 4.402098316099968, 4.462215384554076, 4.520753821832612, 4.577499403956158, 4.6322379069452815, 4.684755106820557, 4.734836779602553, 4.782268701311841, 4.826836647969001, 4.868326395594604, 4.906523720209217, 4.941214397833415, 4.972184204487769, 4.999218916192856, 5.022144570218274, 5.0409641291725205, 5.055729140908652, 5.066491154641944, 5.073301719587677, 5.076212384961124, 5.075274699977566, 5.0705402138522775, 5.062060475800537, 5.049887035037623, 5.034071440778809, 5.014665242239377, 4.991719988634599, 4.965287229179759, 4.935418513090126, 4.902165389580982, 4.865579407867605, 4.825712117165269, 4.7826150666892575, 4.73633980565484, 4.686937883277296, 4.634460848771905, 4.5789602513539425, 4.520487640238691, 4.4590945646414175, 4.394832573777406, 4.327753216861931, 4.257908043110272, 4.18534860173771, 4.110126441959512, 4.032293112990962, 3.951900164047335, 3.86899914434391, 3.7836416030959685, 3.695879089518778, 3.605763152827619, 3.5133453422377716, 3.4186772069645106, 3.3218102962231137, 3.222796159228867, 3.1216863451970314, 3.0185324033428924, 2.9133858828817267, 2.8062983330288125, 2.697321302999434, 2.5865063420088523, 2.4739049992723525, 2.359568824005213, 2.2435493654227114, 2.125898172740131, 2.006666795172734, 1.8859067819358044, 1.7636696822446223, 1.6400070453144635, 1.5149704203606134, 1.3886113565983302, 1.2609814032429025, 1.1321321095096089, 1.0021150246137207, 0.8709816977705314, 0.7387836781952948, 0.6055725151032996, 0.4713997577098228, 0.3363169552301395, 0.20037565687954162, 0.06362741187328114, -0.07387623057335091, -0.21208372124507902, -0.35094351092662635, -0.4904040504027045, -0.6304137904580571, -0.7709211818773953, -0.9118746754454454, -1.0532227219469266, -1.194913772166554, -1.336896276889068, -1.4791186868991812, -1.62152945298162, -1.7640770259211065, -1.9067098565023501]

% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



p = [cx', cy'];
 %计算一阶导数
 for i = 1:length(cx)-1
 pd(i) = (p(i+1,2)-p(i,2))/(p(i+1,1)-p(i,1));
 end
 pd(end+1) = pd(end);
  %计算二阶导数
 for i =2: length(cx)-1
     pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(0.5*(-p(i-1,1)+p(i+1,1)))^2;
 end
      pdd(1) = pdd(2);
     pdd(length(cx)) = pdd(length(cx)-1);
    %计算曲率 
  for i  = 1:length(cx)-1
     k(i) = (pdd(i))/(1+pd(i)^2)^(1.5);
  end
  
  cyaw = atan(pd);
%  cyaw = [-0.42747397147825394, -0.42750072065132655, -0.42758094489540044, -0.4277145744333646, -0.42790149313092396, -0.42814153873731675, -0.4284345032210795, -0.42878013319963476, -0.4291781304611309, -0.42962815257663806, -0.430129813600478, -0.4306826848561635, -0.4312862958051237, -0.4319401349951135, -0.43264365108494557, -0.4333962539419319, -0.4341973158082054, -0.4350461725318764, -0.4359421248588016, -0.4368844397805786, -0.43787235193423374, -0.43890506504896076, -0.4399817534351663, -0.4411015635110099, -0.4422636153615753, -0.4434670043257879, -0.44471080260618273, -0.4459940608966561, -0.4473158100233627, -0.4486750625939931, -0.4500708146507374, -0.4515020473223469, -0.452967728470822, -0.4544668143283879, -0.4559982511205717, -0.457560976671358, -0.45915392198657834, -0.46077601281187724, -0.4624261711617995, -0.46410331681674805, -0.46580636878477943, -0.4675342467254242, -0.4692858723329443, -0.4710601706766694, -0.47285607149628356, -0.4746725104501654, -0.47650843031511225, -0.4783627821360113, -0.4802345263242414, -0.4821226337038107, -0.484026086504453, -0.48594387930111194, -0.48787501989944665, -0.4898185301671866, -0.49177344681135127, -0.4937388221015239, -0.4957137245395447, -0.49769723947613925, -0.49968846967515207, -0.5016865358261939, -0.503690577006636, -0.5056997510940054, -0.5077132351299432, -0.5097302256369819, -0.511749938889487, -0.5137716111401838, -0.5157944988037568, -0.5178178785990676, -0.5196931149270214, -0.5212243260431461, -0.5224197163289975, -0.5232873261735816, -0.5238339185427856, -0.524065048216695, -0.5239851199517127, -0.5235974365070971, -0.5229042373201364, -0.5219067284762255, -0.5206051044967731, -0.5189985623566975, -0.5170853080421537, -0.5148625558662738, -0.5123265206745073, -0.5094724029903408, -0.5062943670756251, -0.5027855118065777, -0.49893783419608717, -0.4947421853247934, -0.49018821837741167, -0.4852643284170402, -0.47995758346934314, -0.47425364643153906, -0.46813668726977986, -0.46158928492527146, -0.4545923183179331, -0.4471248458215146, -0.43916397259260614, -0.43068470517701307, -0.42165979290260597, -0.41205955571398767, -0.4018516983320383, -0.3910011109578644, -0.3794696572209753, -0.3672159507406615, -0.3541951225846469, -0.34035858314180506, -0.3256537835649078, -0.31002398409323995, -0.293408039362483, -0.2757402143998198, -0.2569500495510399, -0.23696229826460727, -0.2156969686215963, -0.19306950785625335, -0.16899117885754447, -0.14336968857788476, -0.11611013987570126, -0.08711638955650051, -0.0562929045043543, -0.02354721209741704, 0.011206963321640584, 0.048045804465186234, 0.08703071058155766, 0.1282028423989582, 0.1715770293292805, 0.2171352954827804, 0.2648204174206136, 0.3145300919358443, 0.36611243518678976, 0.4193636116084794, 0.47402835394583015, 0.5298039462969809, 0.5863478911541079, 0.643289005215774, 0.7002411717905076, 0.7568185361252836, 0.8118690502380587, 0.8641084724045175, 0.9134969015780486, 0.960059587025011, 1.0038662856881957, 1.0450193867705637, 1.0836435702751392, 1.1198772452847279, 1.1538657621615147, 1.1857562421823056, 1.2156937951233464, 1.2438188751256842, 1.27026553679441, 1.2951603814332422, 1.3186220173456338, 1.3407608921349043, 1.3616793857102756, 1.381472078925828, 1.4002261342177875, 1.418021741613346, 1.4349325966649613, 1.4510263868852697, 1.4663652707516057, 1.481006338868105, 1.4950020508771902, 1.5084006445706022, 1.5212465156536303, 1.5335805679889383, 1.545440535058924, 1.5568612739662109, 1.5678750336361222, 1.5785116990634436, 1.5887990135100851, 1.5987627805478712, 1.6084270477787184, 1.6178142739720436, 1.6269454812500126, 1.635840393834563, 1.6445175647523944, 1.6529944917796306, 1.6612877237992376, 1.6694129586432487, 1.6773851333992504, 1.685218508076781, 1.6929267434543929, 1.7005229738619254, 1.7080198755947573, 1.7154297316071752, 1.7227644930901023, 1.7300358385040377, 1.7372552306108673, 1.744433972028028, 1.751583259815283, 1.7587142395979847, 1.7658380597313836, 1.7729659260183661, 1.7801091575084258, 1.7872792439290976, 1.7944879053332161, 1.801747154587014, 1.8090693633763313, 1.8164673324723377, 1.8239543670758143, 1.8315443581520676, 1.8392518707793255, 1.8470922406647414, 1.855081680137207, 1.8632373951090009, 1.8715777147135213, 1.8801222355794698, 1.8888919829993627, 1.8979095915996806, 1.9071995085302154, 1.9167882226713098, 1.9267045239213823, 1.936979797286335, 1.9476483572613554, 1.9587478288892548, 1.9703195829126208, 1.9824092336227193, 1.9950672093546409, 2.0083494070846104, 2.0223179442338215, 2.0370420225265327, 2.052598920493523, 2.0690751327826553, 2.086567675540389, 2.1051855772731987, 2.125051572999925, 2.1463040149253114, 2.1690990033792454, 2.1936127244444314, 2.2200439511487113, 2.2486166168989628, 2.2795822938387658, 2.3132222925563584, 2.3498489271506036, 2.3898052430761987, 2.433462168992391, 2.4812116264501998, 2.5334536477941385, 2.590575124560417, 2.6529176801580223, 2.7207327634867218, 2.794124005772281, 2.8729807692041156, 2.9569127030418287, 3.0452016965400053, 3.136791572382236, -3.0528526363431867, -2.9588998772229815, -2.866118078467373, -2.775975743675515, -2.689697060846188, -2.608184767719592, -2.532002337116722, -2.4614041798828104, -2.3965048038800147, -2.3397948760409086, -2.291344036566652, -2.249929188652858, -2.2145029415177375, -2.1841871135510753, -2.15825404315402, -2.1361045911182837, -2.117247006290865, -2.1012783168776954, -2.087868670762281, -2.07674849089681, -2.0676981000336987, -2.0605394221252733, -2.0551293927447887, -2.051354762141669, -2.049128030743504, -2.048384309028064, -2.0490789386074084, -2.0511857486905054, -2.0546958525159713, -2.059616912890818, -2.0659728256116554, -2.073803785046152, -2.0831667079739544, -2.0941360000040827, -2.106804653092188, -2.121285661829316, -2.137713738342337, -2.156247287694478, -2.1770705727702664, -2.2003959426511295, -2.226465911379705, -2.2555547413252683, -2.2879689905787797, -2.3240462096482406, -2.364150607796797, -2.4086640629261113, -2.457970378933774, -2.512430353061553, -2.572345306978107, -2.63790775477262, -2.7091404559568084, -2.785693709954596, -2.8629771777058166, -2.9381969335531912, -3.0105047505307554, -3.079236843819787, 3.1392557203024505, 3.0788740583345158, 3.022908226491498, 2.9713293509988272, 2.9240098803318566, 2.880755549938086, 2.841332037315793, 2.805485658729539, 2.772958486701022, 2.743498760169683, 2.7168675954883774, 2.692842944371884, 2.6712215957393837, 2.651819848518777, 2.6344733256498656, 2.6190362691126525, 2.6053805541017656, 2.5933945845903703, 2.582982177799927, 2.574061506732527, 2.566564143762559, 2.5604342309811536, 2.5556277919912787, 2.552112193285384, 2.549865759850427, 2.5488775482819763, 2.5491472807805122, 2.550685444476995, 2.553513562245124, 2.5576646432249412, 2.5631838234373894, 2.570129208795003, 2.5785729340730743, 2.588602451346434, 2.6003220590186795, 2.6138546763318944, 2.6293438557915674, 2.6469560037264426, 2.666882741981156, 2.689343283943847, 2.7145866051993917, 2.7428930491370123, 2.774574803956107, 2.8099744025506865, 2.849460020595651, 2.8920818699119404, 2.936427491384847, 2.982406179787393, 3.02989327954402, 3.0787277146995717, 3.1287126057349637, -3.103567370744916, -3.051999928303144, -3.000050157240052, -2.9480107895802816, -2.8961779597767547, -2.844841379864934, -2.794275039844364, -2.744729158412715, -2.6964239288216736, -2.649545362846886, -2.6042432823839587, -2.560631287824937, -2.5187883747956463, -2.4787617868250718, -2.4405706753745005, -2.4042101741998962, -2.3696555622740223, -2.336866269903388, -2.3057895620788367, -2.276363802585878, -2.2485212577514577, -2.222190439166585, -2.1972980116927356, -2.173770308967378, -2.1515345061653335, -2.1305195014414275, -2.1106565553490393, -2.0918797331909, -2.0741261898580414, -2.057336331021679, -2.041453879044128, -2.0264258669421595, -2.0122025792985068, -1.9987374552102448, -1.9859869651650783, -1.9739104710958324, -1.9624700767129548, -1.9516304734846341, -1.9413587862567534, -1.931624421419231, -1.9223989196776674, -1.9136558148336809, -1.9053704994756007, -1.897520098101366, -1.8900833479118169, -1.8830404873040305, -1.8763731519441875, -1.8700642781943329, -1.8640980135966956, -1.8584596340746704, -1.8531354674846352, -1.8481128231423796, -1.8433799269481883, -1.8389258617424753, -1.834740512537043, -1.8308145162837601, -1.8271392158613986, -1.8237066179815833, -1.8205093547355256, -1.8175406485239551, -1.8147942801330408, -1.8122645597388487, -1.8099463006419043, -1.8078347955515526, -1.805925795257055, -1.8042154895387084, -1.8027004901877028, -1.8013778160180771, -1.8002448797679307, -1.7992994768001862, -1.7985397755256436, -1.7979643094829658, -1.7975719710216365, -1.7973620065449136]

  ck  = k;
  
i = 1;
T = 60;
lastIndex = length(cx);
x = 0; y = 2; yaw = 0; v = 0;
time = 0;
target_ind = 1;
ai = 0;

figure

while T > time && target_ind <length(cx)
    
   [error, target_ind]= calc_target_index(x,y,yaw,cx,cy,L)
   
    if abs(error)> 4
        fprintf('mayday mayday!\n')
        break;
    end
    
    target_speed= cal_target_speed(ai,v,tf,target_ind,ctarget_speed)
    ai = PIDcontrol(target_speed, v,Kp);
    di = stanley_control(x,y,yaw,v,cx,cy,cyaw,target_ind,ck,L, error);
     
    [x,y,yaw,v] = update(x,y,yaw,v, ai, di,dt,L);
    time = time + dt;
%     pause(0.1)
    subplot(4,1,1)
    plot(cx,cy,'b',x,y,'r-*','LineWidth',0.2)
    hold on
    subplot(4,1,2)
    plot( i, error,".b")
    hold on
    subplot(4,1,3)
    plot( i, yaw,".r")
    hold on
    subplot(4,1,4)
    plot( i, v,".r")
   drawnow
    hold on
    i  = i + 1;
end
% plot(cx,cy,x,y,'*')
% hold on
function target_speed= cal_target_speed(a,v,tf,index,ctarget_speed)
    v0 = v;
    vf = ctarget_speed(index+50);
    sf = tf;
    a0 = a;
    i =1;
    for s = 0:1:sf
        A = [1 0 0 0; 1 sf sf^2 sf^3; 0 1 0 0; 0 1 2*sf 3*sf^2];
        B = [v0;vf;a0;0];
        C = A\B;
        y(i) = C(1) + C(2)*s + C(3)*s^2 + C(4)* s^3;
        i  =i+1;
    end
    y
%    target_speed = ctarget_speed(index+50)
    target_speed = y(2);
end
function [x, y, yaw, v] = update(x, y, yaw, v, a, delta,dt,L)
    x = x + v * cos(yaw) * dt;
    y = y + v * sin(yaw) * dt;
    yaw = yaw + v / L * tan(delta) * dt;
    v = v + a * dt;
end

function [a] = PIDcontrol(target_v, current_v, Kp)
a = Kp * (target_v - current_v);
end

function [delta] = stanley_control(x,y,yaw,v,cx,cy,cyaw, ind,ck,L, error)
    tx = cx(ind + 5);
    ty = cy(ind + 5);
    delta_yaw = v * 0.1 * sin(yaw) / L;
%     th_e = pipi(yaw + delta_yaw - cyaw(ind));
    alpha = pipi(atan((ty-y)/(tx-x)) -yaw);
    gain_k  = 1;
    theta = atan(gain_k* error/v);
    delta = alpha + theta;
    
end

function [error, ind] = calc_target_index(x,y,yaw, cx,cy,L)
x = x + L * cos(yaw);
y = y + L * sin(yaw);
N =  length(cx);
Distance = zeros(N,1);
for i = 1:N
Distance(i) =  sqrt((cx(i)-x)^2 + (cy(i)-y)^2);
end
[value, location]= min(Distance);
ind = location;
  if y<cy(ind) 
        error = -value;
    else
        error = value;
  end
end

function [angle] = pipi(angle)

if (angle > pi)
    angle =  angle - 2*pi;
elseif (angle < -pi)
    angle = angle + 2*pi;
else
    angle = angle;
end
end

