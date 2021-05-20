prompt = 'Valores do artigo?(Y/N) ';
testing = input(prompt, 's');
if isempty(testing)
    testing = 'Y';
    testing = 1;
elseif testing == 'Y' || testing == 'y'
    testing = 1;
elseif testing == 'N' || testing == 'n'
    testing = 0;
else 
    prompt = 'Erro'
end

if testing
Q10 = 15; %valor nominal de q1 (ponto de funcionamento), l/s
Q20 = 5; %valor nominal de q2 (ponto de funcionamento), l/s
C1 = 1; %concentraçao do líquido 1, mole/l
C2 = 2; %concentraçao do líquido 2, moles/l
H0 = 1; %altura nominal do líquido no tanque, m
C0 = 1.25; %concentração nominal do líquido no tanque, moles/l
T = 0.05; %50ms, s
else
Q10 = 2; %valor nominal de q1 (ponto de funcionamento), l/s
Q20 = 30; %valor nominal de q2 (ponto de funcionamento), l/s
C1 = 1; %concentraçao do líquido 1, mole/l
C2 = 2; %concentraçao do líquido 2, moles/l
H0 = 0.01; %altura nominal do líquido no tanque, m
C0 = 10; %concentração nominal do líquido no tanque, moles/l
T = 50; %50ms, s
end

s=tf('s');
syms h
syms c
syms q1
syms q2

%% Área do tanque

%T = S*H0/(Q10+Q20)
S = T*(Q10+Q20)/H0

%% Non linear system

%H = s((q1+q2)/S-sqrt(2*9.8)*sqrt(H))
C = (s*Q10*C1+s*Q20*C2)/(H0*S+s*Q10+s*Q20)

%% Resposta ao degrau - 1

figure(1)
step(C)

%% Linear state space model

x = [h; c]
u = [q1; q2]
A = [ -1/(2*T) 0; 0  -1/T]
B = [1/S 1/S; (C1-C0)/(S*H0) (C2-C0)/(S*H0)]
C = [1 0; 0 1]
D = [0 0; 0 0]

%% system

sys = ss(A,B,C,D)

%% resposta do degrau - 2

figure(2)
step(sys)
