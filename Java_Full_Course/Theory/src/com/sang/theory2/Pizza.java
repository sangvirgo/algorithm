package com.sang.theory2;

public class Pizza {
	private String bread;
	private String sauce;
	private String cheese;
	/**
	 * @param bread
	 * @param sauce
	 * @param cheese
	 */
	Pizza(String bread, String sauce, String cheese) {
		super();
		this.bread = bread;
		this.sauce = sauce;
		this.cheese = cheese;
	}
	
	Pizza(String bread, String sauce) {
		super();
		this.bread = bread;
		this.sauce = sauce;
	}

	public String getBread() {
		return bread;
	}

	public void setBread(String bread) {
		this.bread = bread;
	}

	public String getSauce() {
		return sauce;
	}

	public void setSauce(String sauce) {
		this.sauce = sauce;
	}

	public String getCheese() {
		return cheese;
	}

	public void setCheese(String cheese) {
		this.cheese = cheese;
	}
	
	
}