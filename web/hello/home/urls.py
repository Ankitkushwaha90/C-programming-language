from django.urls import path
from home import views

urlpatterns = [
     path('', views.index, name='home'),
     path('about', views.about, name='about'),
     path('blog', views.blog, name='blog'),
     path('contact', views.contact, name='contact'),
]