from seleniumbase import BaseCase

class MyTourClass(BaseCase):
    def test_google_tour(self):
        self.open("https://cellardoor.info")
        self.wait_for_element('span[class="block text-emerald-600 xl:inline"]')

        self.create_tour(theme="introjs")
        self.add_tour_step("Platform de gestion de flotte")
        self.add_tour_step("Pour se connecter", 'a[href="/login"]')
        self.play_tour()
        
        self.click('a[href="/login"]')
        self.wait_for_element("#email")
        
        self.create_tour(theme="introjs")
        self.add_tour_step("On va se connecter en tant que gestionnaire")
        self.add_tour_step("Identifiants : Email", 'input[id="email"]')
        self.play_tour()
        
        self.create_tour(theme="introjs")
        self.type("#email", "gestionnaire@emsi.ma")
        self.add_tour_step("Identifiants : Mot de passe", 'input[id="password"]')
        self.play_tour()
        self.type("#password", "azerty")
        
        self.create_tour(theme="introjs")
        self.click('button[type="submit"]')
        self.wait_for_element('p[class="block px-3 py-2 rounded-md text-base font-medium text-gray-700"]')
        self.add_tour_step("Infos : Nom complet de l'utilisateur et son role", 'p[class="block px-3 py-2 rounded-md text-base font-medium text-gray-700"]')
        self.add_tour_step("Cout des pannes par Km", 'img[src="/data/cout_reparations_par_km.png"]')
        self.add_tour_step("Cout des amendes par Km", 'img[src="/data/cout_amendes_par_km.png"]')
        self.add_tour_step("Total frais voyages par année", 'img[src="/data/frais_voyages_par_annee.png"]')
        self.add_tour_step("Pourcentage des vehicules en panne", 'img[src="/data/vehicules_en_panne.png"]')
        self.add_tour_step("Données des voyages", 'a[class="block px-3 py-2 rounded-md text-base font-medium text-gray-700 hover:text-gray-900"]')
        self.play_tour()
        
        self.create_tour(theme="introjs")
        self.click('a[href="/dashboard/voyages"]')
        self.wait_for_element('h1[class="text-3xl mx-4"]')
        self.add_tour_step("Ajouter un voyage", 'a[href="/dashboard/voyages/create"]')
        self.add_tour_step("Rechercher un voyage", 'input[class="border px-2 w-1/4 rounded-lg"]')
        self.add_tour_step("Actions possibles pour un voyage", 'td[class="flex py-4 justify-center"]')
        self.play_tour()
        
        self.create_tour(theme="introjs")
        self.click('a[href="/dashboard/users"]')
        self.wait_for_element('h1[class="text-3xl mx-4"]')
        self.add_tour_step("Gestion des Utilisateurs : Chauffeurs, Gestionnaires, Collaborateurs", 'h1[class="text-3xl mx-4"]')
        self.play_tour()
        
        self.create_tour(theme="introjs")
        self.click('a[href="/dashboard/vehicules"]')
        self.wait_for_element('h1[class="text-3xl mx-4"]')
        self.add_tour_step("Gestion des Vehicules", 'h1[class="text-3xl mx-4"]')
        self.add_tour_step("Se déconnecter", 'button[class="block px-3 py-2 rounded-md text-base font-medium text-gray-700 hover:text-gray-900"]')
        self.play_tour()
        
        self.create_tour(theme="introjs")
        self.click('button[class="block px-3 py-2 rounded-md text-base font-medium text-gray-700 hover:text-gray-900"]')
        self.wait_for_element('img[class="h-8 w-auto sm:h-10"]')
        self.click('a[href="/login"]')
        self.wait_for_element("#email")
        self.create_tour(theme="introjs")
        self.add_tour_step("On va se connecter en tant que chauffeur")
        self.add_tour_step("Identifiants : Email", 'input[id="email"]')
        self.play_tour()
        
        self.create_tour(theme="introjs")
        self.type("#email", "chauffeur@emsi.ma")
        self.add_tour_step("Identifiants : Mot de passe", 'input[id="password"]')
        self.play_tour()
        self.type("#password", "azerty")
        
        self.create_tour(theme="introjs")
        self.click('button[type="submit"]')
        self.wait_for_element('p[class="block px-3 py-2 rounded-md text-base font-medium text-gray-700"]')
        self.add_tour_step("Infos : Nom Chauffeur et son role", 'p[class="block px-3 py-2 rounded-md text-base font-medium text-gray-700"]')
        self.add_tour_step("Voyages du chauffeur", 'h1[class="text-3xl mx-4"]')
        self.add_tour_step("Se déconnecter", 'button[class="block px-3 py-2 rounded-md text-base font-medium text-gray-700 hover:text-gray-900"]')
        self.play_tour()