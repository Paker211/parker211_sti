<template>
  <h1>{{title}}</h1>
  <h2>{{name}} is good.</h2>
  <h2>total:{{price*quantity}}</h2>
</template>

<script>
export default {
  name: 'App',
  data() {
    return {
      title: 'My First Vue App :)',
      name: 'Jason',
      price: 100,
      quantity: 32,
    }
  }
}
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
